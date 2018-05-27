SDCC=sdcc
SDLD=sdld
OBJECTS=usart_print.ihx clk.rel usart.rel it.rel gpio.rel

INC=-I../library/inc/ -I./
ARCH=-lstm8 -mstm8
CFLAGS=--opt-code-size

.PHONY: all clean flash

all: $(OBJECTS)

clean:
	rm -f *.ihx *.cdb *.asm *.lk *.lst *.map *.rel *.rst *.sym

flash:
	stm8flash -c stlinkv2 -p stm8l101f3 -w usart.ihx

gpio.rel: ../library/src/stm8l10x_gpio.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

usart.rel: ../library/src/stm8l10x_usart.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

clk.rel: ../library/src/stm8l10x_clk.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

it.rel: stm8l10x_it.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

usart_print.rel: usart_print.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

usart_print.ihx: usart_print.rel clk.rel usart.rel it.rel gpio.rel
	$(SDCC) $(ARCH) $(INC) $(CFLAGS) $(LDFLAGS) --out-fmt-ihx $^
