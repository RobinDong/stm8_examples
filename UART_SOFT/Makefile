SDCC=sdcc
SDLD=sdld
OBJECTS=uart_soft.ihx

.PHONY: all clean flash

all: $(OBJECTS)

clean:
	rm -f *.ihx *.cdb *.asm *.lk *.lst *.map *.rel *.rst *.sym

flash:
	stm8flash -c stlinkv2 -p stm8l101f3 -w uart_soft.ihx

%.ihx: %.c
	$(SDCC) -lstm8 -mstm8 --out-fmt-ihx $(CFLAGS) $(LDFLAGS) $<
