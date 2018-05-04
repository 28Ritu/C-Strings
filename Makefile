SHLIB = libstrshared.so
STLIB = libstrstatic.a

CFLAGS = -fpic

OBJS = str.o  

all: $(SHLIB) $(STLIB)

shared: $(SHLIB)

static: $(STLIB)

$(SHLIB): $(OBJS)
	gcc -shared $(OBJS) -o $(SHLIB)

$(STLIB): $(OBJS)
	ar rcs $(STLIB) $(OBJS)

str.o: str.c str.h
	gcc -c $(CFLAGS) str.c

.PHONY: clean

clean:
	rm -f $(OBJS) $(SHLIB) $(STLIB) 
