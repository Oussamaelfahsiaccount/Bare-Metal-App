
#define SRAM_START 0x20000000U
#define SRAM_SIZE  (128 * 1024 ) // 128 KB
#define SRAM_END   SRAM_START + SRAM_SIZE
#define END_STACK SRAM_END 

// weak : let the programmer to override the function with the some name in main app  

void isr_reset(void) ;
void isr_nmi (void)          __attribute__((weak , alias("Default_Handler"))); 
void isr_hard_fault(void)    __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_mem_fault(void)     __attribute__((weak ,alias("Default_Handler"))) ;
void isr_bus_fault(void)     __attribute__((weak ,alias("Default_Handler")));
void isr_usage_fault(void)   __attribute__((weak ,alias("Default_Handler"))) ;
void isr_svc(void)           __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dbgmon(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_pendsv (void)       __attribute__((weak ,alias("Default_Handler"))) ;
void isr_systick(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_wwdg(void)          __attribute__((weak ,alias("Default_Handler"))) ;
void isr_pvd(void)           __attribute__((weak ,alias("Default_Handler"))) ;
void isr_tamp(void)          __attribute__((weak ,alias("Default_Handler")))  ; 
void isr_rtc_wkup(void)      __attribute__((weak ,alias("Default_Handler"))) ;
void isr_flach(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_rcc(void)           __attribute__((weak ,alias("Default_Handler"))) ;
void isr_exti0(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_exti1(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_exti2(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_exti3(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_exti4(void)         __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dma1_Strem0(void)   __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dma1_Strem1(void)   __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dma1_Strem2(void)   __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma1_Strem3(void)   __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dma1_Strem4(void)   __attribute__((weak ,alias("Default_Handler"))) ;
void isr_dma1_Strem5(void)   __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma1_Strem6(void)   __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_adc(void)           __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can1_tx(void)       __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_can1_rx0(void)      __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can1_rx1(void)      __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can1_sce(void)      __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_exti9_5(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim1_brk_tim9(void) __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim1_up_tim10(void) __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_trg_com_tim11(void) __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim1_cc(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim2(void)          __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_tim3(void)          __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_tim4(void)          __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c1_ev(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c1_er(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c2_ev(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c2_er(void)       __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_spi1(void)          __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_spi2(void)          __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_usart1(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_usart2(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_usart3(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_exti15_10(void)     __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_rtc_alarm(void)     __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_otg_fs_wkup(void)   __attribute__((weak ,alias("Default_Handler"))); 
void isr_tim8_brk_tim12(void)      __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim8_up_tim13(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim8_trg_com_tim14(void)  __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_tim8_cc(void)             __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma1_stream7(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_fsmc(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_sdio(void)                __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_tim5(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_spi3(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_uart4(void)               __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_uart5(void)               __attribute__((weak ,alias("Default_Handler")))  ; 
void isr_tim6_dac(void)            __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_tim7(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream0(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream1(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream2(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream3(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream4(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_eth(void)                 __attribute__((weak ,alias("Default_Handler"))) ;  
void isr_ethwkup(void)             __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can2_tx(void)             __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can2_rx0(void)            __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can2_rx1(void)            __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_can2_sce(void)            __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_otg_fs(void)              __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream5(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream6(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dma2_stream7(void)        __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_usart6(void)              __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c3_ev(void)             __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_i2c3_er(void)             __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_otg_hs_ep1_out(void)      __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_otg_hs_ep1_in(void)       __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_otg_hs_wkup(void)         __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_otg_hs(void)              __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_dcmi(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_cryp(void)                __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_hash_rng(void)            __attribute__((weak ,alias("Default_Handler"))) ; 
void isr_fpu (void)                __attribute__((weak ,alias("Default_Handler")));        


__attribute__((section(".isr_vector"))) // telling the compiler to put the vector table in isr_vector Section 

void (*const IV[])(void) __attribute__((section(".isr_vector"))) ={

	(void(*) (void) ) (END_STACK) , 
	isr_reset ,
	isr_nmi , 
	isr_hard_fault , 
	isr_mem_fault , 
	isr_bus_fault , 
	isr_usage_fault ,
	0,0,0,0,
	isr_svc ,
	isr_dbgmon , 
	0 , 
	isr_pendsv , 
	isr_systick , 
	isr_wwdg , 
	isr_pvd ,
	isr_tamp , 
	isr_rtc_wkup ,
	isr_flach , 
	isr_rcc , 
	isr_exti0 , 
	isr_exti1 , 
	isr_exti2 ,
	isr_exti3 ,
	isr_exti4 ,
	isr_dma1_Strem0 , 
	isr_dma1_Strem1 ,
	isr_dma1_Strem2 , 
	isr_dma1_Strem3 , 
	isr_dma1_Strem4 , 
	isr_dma1_Strem5 , 
	isr_dma1_Strem6 , 
	isr_adc  ,
	isr_can1_tx , 
	isr_can1_rx0 , 
	isr_can1_rx1 ,
	isr_can1_sce ,
	isr_exti9_5 ,
	isr_tim1_brk_tim9 , 
	isr_tim1_up_tim10 ,
	isr_trg_com_tim11 ,
	isr_tim1_cc , 
	isr_tim2 , 
	isr_tim3 , 
	isr_tim4 ,
	isr_i2c1_ev ,
	isr_i2c1_er ,
	isr_i2c2_ev ,
	isr_i2c2_er , 
	isr_spi1 , 
	isr_spi2 ,
	isr_usart1 ,
	isr_usart2 ,
	isr_usart3 ,
	isr_exti15_10 ,
	isr_rtc_alarm , 
	isr_otg_fs_wkup ,
	isr_tim8_brk_tim12 ,
	isr_tim8_up_tim13 ,
	isr_tim8_trg_com_tim14 ,
	isr_tim8_cc ,
	isr_dma1_stream7 ,
	isr_fsmc ,
	isr_sdio , 
	isr_tim5 ,
	isr_spi3 ,
	isr_uart4 , 
	isr_uart5 ,
	isr_tim6_dac , 
	isr_tim7 ,
	isr_dma2_stream0 ,
	isr_dma2_stream1 ,
	isr_dma2_stream2 ,
	isr_dma2_stream3 ,
	isr_dma2_stream4 ,
	isr_eth , 
	isr_ethwkup ,
	isr_can2_tx ,
	isr_can2_rx0,
	isr_can2_rx1,
	isr_can2_sce ,
	isr_otg_fs  ,
	isr_dma2_stream5 ,
	isr_dma2_stream6 ,
	isr_dma2_stream7 ,
	isr_usart6  ,
	isr_i2c3_ev ,
	isr_i2c3_er ,
	isr_otg_hs_ep1_out ,
	isr_otg_hs_ep1_in  ,
	isr_otg_hs_wkup    ,
	isr_otg_hs         ,
	isr_dcmi           , 
	isr_cryp           , 
	isr_hash_rng       ,
	isr_fpu            



};


void Default_Handler(void) {


while(1) ; 

}



void isr_reset(void){  // Resest Handler  

// .data initialisation 

/* in order to copy .data from FLASH to SRAM we need to know the Boundaries (_sdata , _edata) -->exported
from the linker script
*/ 



// .bss initialisation 

// Call main 

}
