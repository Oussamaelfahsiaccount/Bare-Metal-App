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
    }> FLASH 

    .data :
    {
        *(.data)
    }> SRAM AT>FLASH

    .bss :
    {
        *(.bss) 
    }> SRAM 


}

