all: isUpper.o changeUppers.o
	cc -o makeLower isUpper.o changeUppers.o

isUpper.o: isUpper.c isUpper.h
	cc -c isUpper.c

changeUppers.o: changeUppers.c isUpper.h
	cc -c changeUppers.c

clean:
	rm *.o
	rm makeLower
