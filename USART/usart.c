#include "../INC/stm8l.h"

void putchar(unsigned char c)
{
    while(!(USART1_SR & USART_SR_TXE));

    USART1_DR = c;
}

void main(void)
{
    unsigned long i = 0;

    CLK_DIVR = 0x00; // Set the frequency to 16 MHz
    CLK_PCKENR1 = 0xFF; // Enable peripherals

    PC_DDR = 0xFF; // Put TX line on
    PC_CR1 = 0xFF;
    PC_CR2 = 0xFF;

    PB_DDR = 0xFF;
    PB_CR1 = 0xFF;
    PB_CR2 = 0xFF;

    USART1_BRR2 = 0x03; USART1_BRR1 = 0x68; // 9600 baud
    USART1_CR2 = USART_CR2_TEN; // Enable Transfer
    USART1_CR3 &= ~(USART_CR3_STOP1 | USART_CR3_STOP2); // 1 stop bit

    for(;;)
    {
        putchar('H');
        putchar('e');
        putchar('l');
        putchar('l');
        putchar('o');
        putchar('\n');
        PB_ODR = 0xFF;
        PC_ODR = 0xFF;
        for(i = 0; i < 447456; i++); // Delay
        PB_ODR = 0x00;
        PC_ODR = 0x00;
        for(i = 0; i < 447456; i++); // Delay
    }
}
