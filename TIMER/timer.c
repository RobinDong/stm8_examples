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
    CLK_DIVR = 0x03;  // Set master to 2Mhz
    CLK->PCKENR |= CLK_PCKENR_TIM2;
}

void timer2_init() {
    TIM2->PSCR = 0x07; // PSC[2:0] = 7
    TIM2->ARRH = 0xFF;
    TIM2->ARRL = 0xFF;
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
        __asm__("wfi");
        PB_ODR = value;
        //delay(1000);
        //PB_ODR = 0x00;
        /*delay(1000);
        if (clock() % 100 < 50) {
            PB_ODR = 0xFF;
        } else {
            PB_ODR = 0x00;
        }*/
    }
}
