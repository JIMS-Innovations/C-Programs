CFLAGS=-Wall -g

all:
	cc $(CFLAGS) ex1.c -o ex1.out
	cc $(CFLAGS) ex3.c -o ex3.out

clean:
	rm -f ex*.out
