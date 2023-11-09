
CROSS_COMPILE=arm-none-eabi-
CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
OBJCOPY=$(CROSS_COMPILE)objcopy

MACH=cortex-m4

CFLAGS=-c -mcpu=cortex-m4 -mthumb -std=gnu11 -Wall -o0
LDFLAGS=-T target.ld -gc-sections -nostdlib -Map=image.map

all: stm32_startup_v2.o

stm32_startup_v2.o: stm32_startup_v2.c
	$(CC) $(CFLAGS) -o $(@) $(^)

clean :
	rm -rf *.o *.elf




