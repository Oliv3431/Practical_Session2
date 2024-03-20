CC = gcc
CFLAGS = -Wall

all: hello_world

hello_world: hello_world.c
	$(CC) $(CFLAGS) hello_world.c -o hello_world

clean:
	rm -f hello_world
