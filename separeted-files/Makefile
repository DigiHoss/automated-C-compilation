CC = gcc 
OUTPUT = hello
CFLAGS = -Wall -g -O2
.PHONY: clean
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

%.o: %.c extensions.h
	$(CC) -c $< -o $@

$(OUTPUT): $(OBJECTS) 
	$(CC) $^ $(CFLAGS) -o $@

build:  $(OUTPUT)
run: $(OUTPUT)
	./$<

all: build run

clean: 
	rm -f $^ $(OBJECTS) $(OUTPUT)
