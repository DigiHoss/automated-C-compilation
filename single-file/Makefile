# create a variable
CC = gcc
INPUT = hello.c
EDITOR ?= vim $(INPUT) 
OUTPUT = hello
CFLAGS = -Wall -g -O2 # just for warning, ..etc
$(OUTPUT): hello.c	
	@echo "Target $@" # To keep track the target on the screen	
	$(CC) $<  $(CFLAGS) -o $(OUTPUT) # `<` refers to hello.c	
build:  $(INPUT)

run: $(OUTPUT)
	@echo "Target $@"  # if you think to remove `@` the command itself also it will display on the screen :/		# or you can just run make with -s option to activate silent mode as `@` does
	./$< # and here to OUTPUT
edit: 
	$(EDITOR)
all: build run

clean: $(OUTPUT)
	rm -f $^
