#include "uart_sssss.h"

////////////////////////////////////////////////////////////////
#define  GPIOAEN              (1U << 0)
#define  GPIOAEN              (1U << 17)
#define  DBG_UART_BAUDRATE    115200
#define  SYS_FREQ             16000000
#define  APB1_CLK             SYS_FREQ
#define  CR1_TE               (1U << 3)
#define  CR1_UE               (1U << 13)
#define  SR_TXE               (1U << 7)

///////////////////////////////////////////////////////////////


////////////////////////////////////////////
#define periphclck 16000000
#define baudrate 115200
///////////////////////////////////////////


void uart2_tx_init(void)
{
/*
	RCC->AHB1ENR |= (1U << 0);
	RCC->APB1ENR |= (1U << 17);

	GPIOA->MODER &=~(1U << 4);
	GPIOA->MODER |= (1U << 5);

	GPIOA->AFR[0]  |= (1U << 8);
	GPIOA->AFR[0]  |= (1U << 9);
	GPIOA->AFR[0]  |= (1U << 10);
	GPIOA->AFR[0]  &=~(1U << 11);

	USART2->CR2 |=(1U << 11);

	uart_set_baudrate(USART2,periphclck,baudrate);

	USART2->CR1 |= (1U << 3);

	USART2->CR1 |= (1U << 13);
*/
}

void uart2_transmit(int ch)
{/*
	while(!(USART2->SR & (1U << 7))){}//make sure this is empty before entering the data.
	USART2->DR = (ch & 0xFF);
 */
}
//////////////
///
///
///


void pa_0_EXTI_Init(void)
{
	/*
//Disable global interrupt
	__disable_irq();
//Enable clock access for GPIOA
RCC->AHB1ENR |= (1U << 0);
//set pc13 as input
//input by deafoult.
GPIOC->MODER &= ~((1U << 0) | (1U << 1));
//our exti is part of the sysconfig module so we need to enable the clock here.to sysconfig.
RCC->APB2ENR |= (1U << 14);
//select port c for pin 13
SYSCFG->EXTICR[0] &= ~ ((1U << 0) | (1U << 1) | (1U << 2) | (1U << 3));
//unmask exti 13
EXTI->IMR |= (1U << 0);
//select falling edge trigger.
EXTI->FTSR |= (1U << 0);
//Enable EXTI13 in NVIC:
NVIC_EnableIRQ(EXTI0_IRQn);
//Enable global interrupt
__enable_irq();
*/
}

