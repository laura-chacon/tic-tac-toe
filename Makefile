CC=g++
LDLIBS=`pkg-config gtkmm-2.4 --cflags --libs`
CFLAGS=-Wall -g `pkg-config gtkmm-2.4 --cflags`
OBJS=ttt.o  base.o

ttt: $(OBJS)
	$(CC) $(OBJS) $(LDLIBS) -o ttt

base.o: base.cc
	$(CC) $(CFLAGS) -c base.cc

ttt.o: ttt.cc
	$(CC) $(CFLAGS) -c ttt.cc

clean:
	rm -rf *.o *~ ttt
