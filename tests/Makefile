# @Author: Thomas Couacault <elkoiko>
# @Date:   01-Feb-2018
# @Email:  tcouacault@gmail.com
# @Filename: Makefile
# @Last modified by:   elkoiko
# @Last modified time: 01-Feb-2018

CC=gcc
CFLAGS=-W -Wall -ansi -pedantic -g
LDFLAGS=-lcString
INC_PATH=-I../includes
LIB_PATH=-L../lib
BIN=test
SRC= mainTest.c
OBJ= $(SRC:.c=.o)

all: $(BIN)
	mv test ./bin

%.o:	%.c
		$(CC) -o $@ -c $< $(INC_PATH) $(CFLAGS)

$(BIN):	$(OBJ)
	$(CC) -o $@ $^ $(LIB_PATH) $(LDFLAGS)

clean:
	rm -rf *.o

mrproper:	clean
	rm -rf ./bin/$(BIN)

re:	mrproper all
