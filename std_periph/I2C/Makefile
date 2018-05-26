SDCC=sdcc
SDLD=sdld
OBJECTS=i2c_writer.ihx clk.rel i2c.rel it.rel

INC=-I../library/inc/ -I./
ARCH=-lstm8 -mstm8
CFLAGS=--opt-code-size

.PHONY: all clean flash

all: $(OBJECTS)

clean:
	rm -f *.ihx *.cdb *.asm *.lk *.lst *.map *.rel *.rst *.sym

flash:
	stm8flash -c stlinkv2 -p stm8l101f3 -w i2c_writer.ihx

clk.rel: ../library/src/stm8l10x_clk.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

i2c.rel: ../library/src/stm8l10x_i2c.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

it.rel: stm8l10x_it.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

i2c_writer.rel: i2c_writer.c
	$(SDCC) $(ARCH) $< $(INC) $(CFLAGS) -c -o $@

i2c_writer.ihx: i2c_writer.rel clk.rel i2c.rel it.rel
	$(SDCC) $(ARCH) $(INC) $(CFLAGS) $(LDFLAGS) --out-fmt-ihx $^
