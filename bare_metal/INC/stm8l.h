/* GPIO */
#define PA_ODR *(unsigned char*)0x5000
#define PA_IDR *(unsigned char*)0x5001
#define PA_DDR *(unsigned char*)0x5002
#define PA_CR1 *(unsigned char*)0x5003
#define PA_CR2 *(unsigned char*)0x5004

#define PB_ODR *(unsigned char*)0x5005
#define PB_IDR *(unsigned char*)0x5006
#define PB_DDR *(unsigned char*)0x5007
#define PB_CR1 *(unsigned char*)0x5008
#define PB_CR2 *(unsigned char*)0x5009

#define PC_ODR *(unsigned char*)0x500A
#define PC_IDR *(unsigned char*)0x500B
#define PC_DDR *(unsigned char*)0x500C
#define PC_CR1 *(unsigned char*)0x500D
#define PC_CR2 *(unsigned char*)0x500E

#define PD_ODR *(unsigned char*)0x500F
#define PD_IDR *(unsigned char*)0x5010
#define PD_DDR *(unsigned char*)0x5011
#define PD_CR1 *(unsigned char*)0x5012
#define PD_CR2 *(unsigned char*)0x5013

#define PE_ODR *(unsigned char*)0x5014
#define PE_IDR *(unsigned char*)0x5015
#define PE_DDR *(unsigned char*)0x5016
#define PE_CR1 *(unsigned char*)0x5017
#define PE_CR2 *(unsigned char*)0x5018

#define PF_ODR *(unsigned char*)0x5019
#define PF_IDR *(unsigned char*)0x501A
#define PF_DDR *(unsigned char*)0x501B
#define PF_CR1 *(unsigned char*)0x501C
#define PF_CR2 *(unsigned char*)0x501D

/* CLOCK */
#define CLK_DIVR	*(unsigned char*)0x50C0
#define CLK_CRTCR	*(unsigned char*)0x50C1
#define CLK_ICKR	*(unsigned char*)0x50C2
#define CLK_PCKENR1	*(unsigned char*)0x50C3
#define CLK_PCKENR2	*(unsigned char*)0x50C4
#define CLK_CCOR	*(unsigned char*)0x50C5
#define CLK_ECKR	*(unsigned char*)0x50C6
#define CLK_SCSR	*(unsigned char*)0x50C7
#define CLK_SWR 	*(unsigned char*)0x50C8
#define CLK_SWCR	*(unsigned char*)0x50C9
#define CLK_CSSR	*(unsigned char*)0x50CA
#define CLK_CBEEPR	*(unsigned char*)0x50CB
#define CLK_HSICALR	*(unsigned char*)0x50CC
#define CLK_HSITRIMR	*(unsigned char*)0x50CD
#define CLK_HSIUNLCKR	*(unsigned char*)0x50CE
#define CLK_REGCSR	*(unsigned char*)0x50CF


/* ------------------- USART ------------------- */
#define USART1_SR *(unsigned char*)0x5230
#define USART1_DR *(unsigned char*)0x5231
#define USART1_BRR1 *(unsigned char*)0x5232
#define USART1_BRR2 *(unsigned char*)0x5233
#define USART1_CR1 *(unsigned char*)0x5234
#define USART1_CR2 *(unsigned char*)0x5235
#define USART1_CR3 *(unsigned char*)0x5236
#define USART1_CR4 *(unsigned char*)0x5237
#define USART1_CR5 *(unsigned char*)0x5238
#define USART1_GTR *(unsigned char*)0x5239
#define USART1_PSCR *(unsigned char*)0x523A

/* USART_CR1 bits */
#define USART_CR1_R8 (1 << 7)
#define USART_CR1_T8 (1 << 6)
#define USART_CR1_UARTD (1 << 5)
#define USART_CR1_M (1 << 4)
#define USART_CR1_WAKE (1 << 3)
#define USART_CR1_PCEN (1 << 2)
#define USART_CR1_PS (1 << 1)
#define USART_CR1_PIEN (1 << 0)

/* USART_CR2 bits */
#define USART_CR2_TIEN (1 << 7)
#define USART_CR2_TCIEN (1 << 6)
#define USART_CR2_RIEN (1 << 5)
#define USART_CR2_ILIEN (1 << 4)
#define USART_CR2_TEN (1 << 3)
#define USART_CR2_REN (1 << 2)
#define USART_CR2_RWU (1 << 1)
#define USART_CR2_SBK (1 << 0)

/* USART_CR3 bits */
#define USART_CR3_LINEN (1 << 6)
#define USART_CR3_STOP2 (1 << 5)
#define USART_CR3_STOP1 (1 << 4)
#define USART_CR3_CLKEN (1 << 3)
#define USART_CR3_CPOL (1 << 2)
#define USART_CR3_CPHA (1 << 1)
#define USART_CR3_LBCL (1 << 0)

/* USART_SR bits */
#define USART_SR_TXE (1 << 7)
#define USART_SR_TC (1 << 6)
#define USART_SR_RXNE (1 << 5)
#define USART_SR_IDLE (1 << 4)
#define USART_SR_OR (1 << 3)
#define USART_SR_NF (1 << 2)
#define USART_SR_FE (1 << 1)
#define USART_SR_PE (1 << 0)


/* ------------------- TIMERS ------------------- */
#define TIM1_CR1 *(unsigned char*)0x52B0
#define TIM1_CR2 *(unsigned char*)0x52B1
#define TIM1_SMCR *(unsigned char*)0x52B2
#define TIM1_ETR *(unsigned char*)0x52B3
#define TIM1_DER *(unsigned char*)0x52B4
#define TIM1_IER *(unsigned char*)0x52B5
#define TIM1_SR1 *(unsigned char*)0x52B6
#define TIM1_SR2 *(unsigned char*)0x52B7
#define TIM1_EGR *(unsigned char*)0x52B8
#define TIM1_CCMR1 *(unsigned char*)0x52B9
#define TIM1_CCMR2 *(unsigned char*)0x52BA
#define TIM1_CCMR3 *(unsigned char*)0x52BB
#define TIM1_CCMR4 *(unsigned char*)0x52BC
#define TIM1_CCER1 *(unsigned char*)0x52BD
#define TIM1_CCER2 *(unsigned char*)0x52BE
#define TIM1_CNTRH *(unsigned char*)0x52BF
#define TIM1_CNTRL *(unsigned char*)0x52C0
#define TIM1_PSCRH *(unsigned char*)0x52C1
#define TIM1_PSCRL *(unsigned char*)0x52C2
#define TIM1_ARRH *(unsigned char*)0x52C3
#define TIM1_ARRL *(unsigned char*)0x52C4
#define TIM1_RCR *(unsigned char*)0x52C5
#define TIM1_CCR1H *(unsigned char*)0x52C6
#define TIM1_CCR1L *(unsigned char*)0x52C7
#define TIM1_CCR2H *(unsigned char*)0x52C8
#define TIM1_CCR2L *(unsigned char*)0x52C9
#define TIM1_CCR3H *(unsigned char*)0x52CA
#define TIM1_CCR3L *(unsigned char*)0x52CB
#define TIM1_CCR4H *(unsigned char*)0x52CC
#define TIM1_CCR4L *(unsigned char*)0x52CD
#define TIM1_BKR *(unsigned char*)0x52CE
#define TIM1_DTR *(unsigned char*)0x52CF
#define TIM1_OISR *(unsigned char*)0x52D0
#define TIM1_DCR1 *(unsigned char*)0x52D1
#define TIM1_DCR2 *(unsigned char*)0x52D2
#define TIM1_DMA1R *(unsigned char*)0x52D3

/* TIM_IER bits */
#define TIM_IER_BIE (1 << 7)
#define TIM_IER_TIE (1 << 6)
#define TIM_IER_COMIE (1 << 5)
#define TIM_IER_CC4IE (1 << 4)
#define TIM_IER_CC3IE (1 << 3)
#define TIM_IER_CC2IE (1 << 2)
#define TIM_IER_CC1IE (1 << 1)
#define TIM_IER_UIE (1 << 0)

/* TIM_CR1 bits */
#define TIM_CR1_APRE (1 << 7)
#define TIM_CR1_CMSH (1 << 6)
#define TIM_CR1_CMSL (1 << 5)
#define TIM_CR1_DIR (1 << 4)
#define TIM_CR1_OPM (1 << 3)
#define TIM_CR1_URS (1 << 2)
#define TIM_CR1_UDIS (1 << 1)
#define TIM_CR1_CEN (1 << 0)

/* TIM_SR1 bits */
#define TIM_SR1_BIF (1 << 7)
#define TIM_SR1_TIF (1 << 6)
#define TIM_SR1_COMIF (1 << 5)
#define TIM_SR1_CC4IF (1 << 4)
#define TIM_SR1_CC3IF (1 << 3)
#define TIM_SR1_CC2IF (1 << 2)
#define TIM_SR1_CC1IF (1 << 1)
#define TIM_SR1_UIF (1 << 0)

#define __IO volatile

/* Timer */
typedef struct TIM4_struct {
  __IO unsigned char CR1;  /*!< control register 1 */
  __IO unsigned char CR2;  /*!< control register 2 */
  __IO unsigned char SMCR;  /*!< Synchro mode control register */
  __IO unsigned char IER;  /*!< interrupt enable register  */
  __IO unsigned char SR1;  /*!< status register 1    */
  __IO unsigned char EGR;  /*!< event generation register */
  __IO unsigned char CNTR;  /*!< counter register  */
  __IO unsigned char PSCR;  /*!< prescaler register */
  __IO unsigned char ARR;  /*!< auto-reload register */
} TIM4_TypeDef;

typedef struct TIM_struct {
  __IO unsigned char CR1;  /*!< control register 1   */
  __IO unsigned char CR2;  /*!< control register 2   */
  __IO unsigned char SMCR;  /*!< Synchro mode control register */
  __IO unsigned char ETR;  /*!< external trigger register */
  __IO unsigned char IER;  /*!< interrupt enable register*/
  __IO unsigned char SR1;  /*!< status register 1   */
  __IO unsigned char SR2;  /*!< status register 2   */
  __IO unsigned char EGR;  /*!< event generation register */
  __IO unsigned char CCMR1;  /*!< CC mode register 1      */
  __IO unsigned char CCMR2;  /*!< CC mode register 2      */
  __IO unsigned char CCER1;  /*!< CC enable register 1     */
  __IO unsigned char CNTRH;  /*!< counter high       */
  __IO unsigned char CNTRL;  /*!< counter low       */
  __IO unsigned char PSCR;  /*!< prescaler     */
  __IO unsigned char ARRH;  /*!< auto-reload register high  */
  __IO unsigned char ARRL;  /*!< auto-reload register low    */
  __IO unsigned char CCR1H;  /*!< capture/compare register 1 high   */
  __IO unsigned char CCR1L;  /*!< capture/compare register 1 low     */
  __IO unsigned char CCR2H;  /*!< capture/compare register 2 high   */
  __IO unsigned char CCR2L;  /*!< capture/compare register 2 low     */
  __IO unsigned char BKR;  /*!< Break Register */
  __IO unsigned char OISR;  /*!< Output idle register */
} TIM_TypeDef;

#define TIM2_BaseAddress        0x5250
#define TIM3_BaseAddress        0x5280
#define TIM4_BaseAddress        0x52E0

#define TIM2 ((TIM_TypeDef *) TIM2_BaseAddress)
#define TIM3 ((TIM_TypeDef *) TIM3_BaseAddress)
#define TIM4 ((TIM4_TypeDef *) TIM4_BaseAddress)

/* AWU */
typedef struct AWU_struct {
  __IO unsigned char CSR; /* AWU Control status register */
  __IO unsigned char APR; /* AWU Asynchronous prescalar buffer */
  __IO unsigned char TBR; /* AWU Time base selection register */
} AWU_TypeDef;

#define AWU_BaseAddress         0x50F0
#define AWU ((AWU_TypeDef *) AWU_BaseAddress)

#define AWU_CSR_AWUF  ((unsigned char)0x20) /*!< Interrupt flag mask */
#define AWU_CSR_AWUEN ((unsigned char)0x10) /*!< Auto Wake-up enable mask */
#define AWU_CSR_MSR   ((unsigned char)0x01) /*!< Measurement enable mask */

#define AWU_APR_APR ((unsigned char)0x3F) /*!< Asynchronous Prescaler divider mask */

#define AWU_TBR_AWUTB ((unsigned char)0x0F) /*!< Timebase selection mask */

/* Clock */
typedef struct CLK_struct {
  __IO unsigned char CKDIVR;      /*!< Clock Divider Register */
  __IO unsigned char RESERVED1;
  __IO unsigned char RESERVED2;
  __IO unsigned char PCKENR;     /*!< Peripheral Clock Gating Register  */
  __IO unsigned char RESERVED3;
  __IO unsigned char CCOR;       /*!< Configurable Clock Output Register */
} CLK_TypeDef;

#define CLK_BaseAddress         0x50C0
#define CLK ((CLK_TypeDef *) CLK_BaseAddress)

#define CLK_PCKENR_TIM2  ((unsigned char)0x01) /*!< Peripheral Clock Enable 1, TIM2 */
#define CLK_PCKENR_TIM3  ((unsigned char)0x02) /*!< Peripheral Clock Enable 1, TIM3 */
#define CLK_PCKENR_TIM4  ((unsigned char)0x04) /*!< Peripheral Clock Enable 1, TIM4 */
#define CLK_PCKENR_I2C     ((unsigned char)0x08) /*!< Peripheral Clock Enable 1, I2C */
#define CLK_PCKENR_SPI     ((unsigned char)0x10) /*!< Peripheral Clock Enable 1, SPI */
#define CLK_PCKENR_USART   ((unsigned char)0x20) /*!< Peripheral Clock Enable 1, USART */
#define CLK_PCKENR_AWU     ((unsigned char)0x40) /*!< Peripheral Clock Enable 1, AWU */
