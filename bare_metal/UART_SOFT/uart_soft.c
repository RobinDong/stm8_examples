#include "../INC/stm8l.h"

unsigned char value = 0xFF;
unsigned short counter = 0;

void tim2_update_handle(void) __interrupt (19) {
    /* Update LED every 4 seconds */
    if (value == 0) {
        value = 0xFF;
    } else {
        value = 0;
    }
    TIM2->SR1 &= ~((unsigned char)TIM_SR1_UIF);
}

unsigned int clock(void) {
    unsigned char high = TIM2->CNTRH;
    unsigned char low  = TIM2->CNTRL;

    return ((unsigned int)high << 8) | low;
}

void clock_init() {
    CLK_DIVR = 0x03;  // Set master to 2Mhz (2,000,000)
    CLK->PCKENR |= CLK_PCKENR_TIM2;
}

void timer2_init() {
    TIM2->PSCR = 0x05; // PSC[2:0] = 5
    TIM2->ARRH = 0x00; // Used for baud 300
    TIM2->ARRL = 0xD0; // 2,000,000 / exp(2, 5) / 300 = 208
    TIM2->IER = TIM_IER_UIE;
    TIM2->CR1 = 0x01;  // Counter enabled
}

void delay(int d) {
    int i, j;
    for(i = 0; i < d; i++) {
        for (j = 0; j < 100; j++) {
        }
    }
}

void send_8bits(unsigned char ch) {
    unsigned char tmp = ch;
    int i;
    PB_ODR = 0x00; // start low
    __asm__("wfi");
    for (i = 0; i < 8; i++) {
        if ((tmp & 0x01) == 0) {
            PB_ODR = 0x00;
        } else {
            PB_ODR = 0xFF;
        }
        __asm__("wfi");
        tmp = tmp >> 1;
    }
    PB_ODR = 0xFF; // stop high
    __asm__("wfi");
    __asm__("wfi");
    __asm__("wfi"); // wait many times for error redundancy
}

void send_string(unsigned char *string, int size) {
    int i;
    for (i = 0; i < size; i++) {
        send_8bits(string[i]);
    }
}

int main() {
    __asm__("sim");
	// Configure pins
    clock_init();
    timer2_init();
	PB_DDR = 0xFF;
    PB_CR1 = 0xFF;

    __asm__("rim");
	// Loop
    while (1) {
        send_string("Hello world!\n", 13);
    }
}
