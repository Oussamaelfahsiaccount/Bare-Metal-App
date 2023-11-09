ENTRY(isr_reset)



/* MEOMORY LAYOUT */

MEMORY{

    FLASH(rx)   : ORIGIN=0x08000000  ,LENGTH=2048K  
    SRAM(rwx)   : ORIGIN=0x20000000  ,LENGTH=192K
}



SECTIONS{

    .text:
    {
        *(.isr_vector) 
        *(.text)
        *(.ordata)
        _etext = . ;
    }> FLASH 

    .data :
    {
        _sdata = . ; /* '.' truck the VMA ->_sdata <- address .data(RAM)  */
        *(.data)
        _edata = . ; 
    }> SRAM AT>FLASH

    .bss :
    {
        _sbss = .;
        *(.bss) 
        _ebss = .;
    }> SRAM 


}

