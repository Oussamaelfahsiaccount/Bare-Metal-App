
CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS=-c -mcpu=cortex-m4 -mthumb -std=gnu11 -Wall -o0


all: stm32_startup_v2.o

stm32_startup_v2.o: stm32_startup_v2.c
	$(CC) $(CFLAGS) -o $(@) $(^)




