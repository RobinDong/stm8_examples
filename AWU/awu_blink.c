#include "../INC/stm8l.h"

unsigned char value = 0x02;
unsigned short counter = 0;

void awu_irq_handle(void) __interrupt (4) {
    AWU->CSR = AWU->CSR; /* Very Important! */
    if (value == 0x80) {
        value = 0x02;
    } else {
        value = value << 1;
    }
    counter++;
    if (counter >= 831) {
        /* Pump! */
        counter = 0;
    }
}

void clock_init() {
    CLK->PCKENR |= ((unsigned char)CLK_PCKENR_AWU);
}

void awu_init() {
    AWU->CSR |= AWU_CSR_AWUEN;

    AWU->TBR &= (unsigned char)(~AWU_TBR_AWUTB);
    AWU->TBR |= (unsigned char)15;

    AWU->APR &= (unsigned char)(~AWU_APR_APR);
    AWU->APR |= (unsigned char)62;
}

void delay(int d) {
    int i, j;
    for(i = 0; i < d; i++) {
        for (j = 0; j < 100; j++) {
        }
    }
}

int main() {
	// Configure pins
    clock_init();
    awu_init();
	PB_DDR = 0xFE;
    PB_CR1 = 0xFE;
	// Loop
    __asm__("sim");
    while (1) {
        PB_ODR = value;
        delay(1000);
        PB_ODR = 0x00;
        __asm__("halt");
    }
}
