all: build

build: main.c
	gcc -Wall -o main ./main.c
clean:
	rm -f *.o main
