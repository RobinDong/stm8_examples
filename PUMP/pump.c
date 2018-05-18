#include "../INC/stm8l.h"

unsigned short counter = 0;
unsigned short should_pump = 0;

void awu_irq_handle(void) __interrupt (4) {
    AWU->CSR = AWU->CSR; /* Very Important! */

    counter++;
    if (counter >= 830) {
        /* Pump! */
        counter = 0;
        should_pump = 1;
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

void delay(int second) {
    int i, j, k;
    for(i = 0; i < second; i++) {
        for (j = 0; j < 300; j++) {
            for (k = 0; k < 1000; k++) {
            }
        }
    }
}

int main() {
	// Configure pins
    clock_init();
    awu_init();
	PB_DDR = 0xFF;
    PB_CR1 = 0xFF;

    PB_ODR = 0xFF; /* Let's pump */
    delay(60);
    PB_ODR = 0x00; /* Stop pump */

	// Loop
    __asm__("sim");
    while (1) {
        if (should_pump) {
            PB_ODR = 0xFF; /* Let's pump */
            delay(60);
            PB_ODR = 0x00; /* Stop pump */
            should_pump = 0;
        }
        __asm__("halt");
    }
}
