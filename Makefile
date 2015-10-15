all: everyMain.o everyOther.o
	cc -o everyother everyOther.o everyMain.o

everyMain.o: everyMain.c everyOther.h
	cc -c everyMain.c

everyOther.o: everyOther.c everyOther.h
	cc -c everyOther.c

clean:
	rm *.o
	rm everyother
