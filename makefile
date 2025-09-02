CC = gcc
SRC = most-recent-date.c
OBJ = ${SRC:.c=.o}

all: most-recent-date

.c.o:
	${CC} -c -std=c99 -Wall -Wextra -pedantic $<

most-recent-date: ${OBJ}
	${CC} -o $@ ${OBJ}

clean:
	rm -rf most-recent-date ${OBJ}

.PHONY: all clean 
