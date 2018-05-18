SDCC=sdcc
SDLD=sdld
OBJECTS=pump.ihx

.PHONY: all clean flash

all: $(OBJECTS)

clean:
	rm -f *.ihx *.cdb *.asm *.lk *.lst *.map *.rel *.rst *.sym

flash:
	stm8flash -c stlinkv2 -p stm8l101f3 -w pump.ihx

%.ihx: %.c
	$(SDCC) -lstm8 -mstm8 --out-fmt-ihx $(CFLAGS) $(LDFLAGS) $<
