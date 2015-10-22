all: changeUppers.o isUpper.o
	cc -o makeLower changeUppers.o isUpper.o

changeUppers.o: changeUppers.c isUpper.h
	cc -c changeUppers.c

isUpper.o: isUpper.c isUpper.h
	cc -c isUpper.c

clean:
	rm *.o
	rm makeLower
