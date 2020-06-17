IDIR =../inc
CC=g++
CFLAGS=-I$(IDIR) -std=c++11

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = TrainCar.h Train.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o TrainCar.o Train.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Trains: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
