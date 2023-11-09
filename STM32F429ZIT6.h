#ifndef STM32F429ZIT6_H_
#define STM32F429ZIT6_H_
#include <stdint.h>




#define __IO volatile

/* USART STRUCTURE  */
typedef struct{
	    __IO uint32_t SR       ; /* Status Register                    Address Offset : 0x00 */
	 	__IO uint32_t DR       ; /* Data   Register     			   Address Offset : 0x04 */
		__IO uint32_t BRR      ; /* Baud rate register  			   Address Offset : 0x08 */
		__IO uint32_t CR1      ; /* Control register 1  			   Address Offset : 0x0C */
		__IO uint32_t CR2 	   ; /*	Control register 2  			   Address Offset : 0x10 */
		__IO uint32_t CR3	   ; /* Control register 3  			   Address Offset : 0x14 */
		__IO uint32_t GTPR     ; /* Guard time and prescaler register  Address Offset : 0x18 */


}USART_typdef;

// RCC STRUCTURE

typedef struct
{
	__IO uint32_t RC     	     ; /*0x00*/
	__IO uint32_t PLLCFGR		 ; /*0x04*/
	__IO uint32_t CFGR			 ; /*0x08*/
	__IO uint32_t CIR			 ; /*0x0C*/
	__IO uint32_t AHB1RSTR 		 ; /*0x10*/
	__IO uint32_t AHB2RSTR       ; /*0x14*/
	__IO uint32_t AHB3RSTR       ; /*0x18*/
	     uint32_t Reserved0      ;
	__IO uint32_t APB1RSTR       ; /*0x20*/
	__IO uint32_t APB2RSTR       ; /*0x24*/
		 uint32_t Reserved1[2]   ;
	__IO uint32_t AHB1ENR	 	 ; /* RCC AHB1 PERIPHERAL CLOCK REGISTER Address Offset : 0x30 */
	__IO uint32_t AHB2ENR	 	 ; /*0x34*/
	__IO uint32_t AHB3ENR	 	 ; /*0x38*/
	     uint32_t Reserved3      ;
	__IO uint32_t APB1ENR	 	 ; /*0x40*/
	__IO uint32_t APB2ENR		 ; /*0x44*/
	     uint32_t Reserved4[2]   ;
	__IO uint32_t AHB1LPENR	     ; /*0x50*/
	__IO uint32_t AHB2LPENR	     ; /*0x54*/
	__IO uint32_t AHB3LPENR	     ; /*0x58*/
	     uint32_t Reserved5      ;
	__IO uint32_t APB1LPENR	     ; /*0x60*/
	__IO uint32_t APB2LPENR	     ; /*0x64*/
	     uint32_t Reserved6[2]   ;
	__IO uint32_t BDCR			 ; /*0x70*/
	__IO uint32_t CSR 			 ; /*0x74*/
	     uint32_t Reserved7[2]   ;
	__IO uint32_t SSCGR 		 ; /*0x80*/
	__IO uint32_t PLLI2SCFGR     ; /*0x84*/
	__IO uint32_t PLLSAICFGR     ; /*0x88*/
	__IO uint32_t DCKCFGR        ; /*0x8C*/

}RCC_typedef;

// GPIO STRUCTURE

typedef struct
{
	__IO uint32_t MODER    ; /* GPIO MODE Register   		 			  Address Offset : 0x00 */
	__IO uint32_t OTYPER   ; /* GPIO PORT OUT Type Register  			  Address Offset : 0x04 */
	__IO uint32_t OSPEEDR  ; /* GPIO PORT SPEED Register     			  Address Offset : 0x08 */
	__IO uint32_t PUPDR    ; /* GPIO PORT PUSH-UP/PULL-DOWN REGISTER      Address Offset : 0x0C */
	__IO uint32_t IDR 	   ; /* GPIO PORT INPUT DATA Register  			  Address Offset : 0x10 */
	__IO uint32_t ODR	   ; /* GPIO PORT OUTPUT DATA Register  		  Address Offset : 0x14 */
	__IO uint32_t BSRR     ; /* GPIO PORT BIT SET/RESET Register  		  Address Offset : 0x18 */
	__IO uint32_t LCKR     ; /* GPIO PORT CONFIGURATION LOCK Register     Address Offset : 0x1C */
	__IO uint32_t AFR[2]  ; /* GPIO MODE ALTERNATE FUNCTION	LOW AND HIGH  Address Offset : 0x20 */

}GPIO_typdef ;



// RCC
#define RCC    ( (RCC_typedef *)RCC_R_BASE )

// GPIO DECLARETION
#define GPIOA  ( (GPIO_typdef *)GPIOA_R_BASE )
#define GPIOB  ( (GPIO_typdef *)GPIOB_R_BASE )
#define GPIOC  ( (GPIO_typdef *)GPIOC_R_BASE )
#define GPIOD  ( (GPIO_typdef *)GPIOD_R_BASE )
#define GPIOE  ( (GPIO_typdef *)GPIOE_R_BASE )
#define GPIOF  ( (GPIO_typdef *)GPIOF_R_BASE )
#define GPIOG  ( (GPIO_typdef *)GPIOG_R_BASE )
#define GPIOH  ( (GPIO_typdef *)GPIOH_R_BASE )
#define GPIOI  ( (GPIO_typdef *)GPIOI_R_BASE )
#define GPIOJ  ( (GPIO_typdef *)GPIOJ_R_BASE )
#define GPIOK  ( (GPIO_typdef *)GPIOK_R_BASE )

// USART declaretion
#define USART1 ( (USART_typdef *)USART1_BASE )
#define USART2 ( (USART_typdef *)USART2_BASE )
#define USART3 ( (USART_typdef *)USART3_BASE )
#define USART4 ( (USART_typdef *)USART4_BASE )
#define USART5 ( (USART_typdef *)USART5_BASE )
#define USART6 ( (USART_typdef *)USART6_BASE )
#define USART7 ( (USART_typdef *)USART7_BASE )
#define USART8 ( (USART_typdef *)USART8_BASE )









#endif /* STM32F429ZIT6_H_ */
