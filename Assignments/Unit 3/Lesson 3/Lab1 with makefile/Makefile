CC=arm-none-eabi-
CFLAGS =-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
all: learn-in-depth.bin

startup.o : startup.s
	$(CC)as.exe $(CFLAGS)  $< -o $@
Uart.o: Uart.c 
	$(CC)gcc.exe  $(INCS) $(CFLAGS) -c  $< -o $@

%.o : %.c 
	$(CC)gcc.exe  $(INCS) $(CFLAGS) -c $< -o $@

learn-in-depth.elf : $(OBJ) startup.o
	$(CC)ld.exe -T linkerscript.ld $(OBJ) startup.o -o $@ -Map=Map_file.Map

learn-in-depth.bin : learn-in-depth.elf 
	$(CC)objcopy.exe -O binary $< $@
	@echo "Everything is build"
clean:
	rm App.o 
	rm Uart.o
	rm startup.o 
	rm learn-in-depth.elf 
	rm learn-in-depth.bin
	@echo "Everything clean"