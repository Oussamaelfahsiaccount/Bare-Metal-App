#include <stdint.h>
#include "STM2F429ZIT6.h"
#include "STM32_arm7ve.h"

#define GPIOB_clk_EN  (1U<<1)
#define GPIOG_clk_EN  (1U<<6)
#define GPIOA_clk_EN  (1U<<0)

void Delay() {

	for(int i = 0 ; i < 1000000 ; i++ ){


	}

}

int main(void) {

/*
 * 1 - Enable clock for GPIOG
 * 2 - Set the GPIOG as an Output
 * 	   01 : General purpose output Mode
 * 3 - Toggle application
 * */
	RCC->AHB1ENR |= GPIOB_clk_EN ;
	RCC->AHB1ENR |= GPIOG_clk_EN ;
	RCC->AHB1ENR |= GPIOA_clk_EN ;

	GPIOG->MODER |= (1U<<26)     ;
	GPIOG->MODER &=~(1U<<27)     ;

	GPIOA->MODER &=~(1U<<0)     ;
	GPIOA->MODER &=~(1U<<1)     ;

	GPIOB->MODER |= (1U<<26)     ;
	GPIOB->MODER &=~(1U<<27)     ;

	while(1) {
		if( GPIOA->IDR & (1U<<0) ){

			for(int i = 0 ; i < 8  ; i++ ){
				        GPIOG->ODR ^= (1U<<13) ;
						GPIOB->ODR ^= (1U<<13) ;
						Delay() ;
			}

		}
		GPIOG->ODR |= (1U<<13) ;
		GPIOB->ODR &=~(1U<<13) ;


	}
return 0 ;
}

