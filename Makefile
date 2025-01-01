CC = cc
CFLAGS = -std=c99 -pedantic -Wall -Wextra

all: tests

tests: tests.o search.o

test: tests
	./tests

clean:
	rm -f tests *.o

.PHONY: all clean test
