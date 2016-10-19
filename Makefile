PROG=launcher
CC=g++
FLAGS=-Wall
SRCS=main.cpp cellule.cpp map.cpp
EXT=*.o
OBJS=$(SRCS:.c=.o)

all:$(OBJS)
	$(CC) -o $(PROG) $(OBJS)

%.o:%.c
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	rm -f $(EXT) $(PROG)
