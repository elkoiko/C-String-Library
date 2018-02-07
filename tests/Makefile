# @Author: Thomas Couacault <elkoiko>
# @Date:   01-Feb-2018
# @Filename: Makefile
# @Last modified by:   elkoiko
# @Last modified time: 07-Feb-2018

CFLAGS += -g
LDFLAGS =-lcString
INC_PATH =-I../includes -I./includes
LIB_PATH =-L../lib
BIN = runTests
SRC =	mainTest.c \
			settersTest.c \
			gettersTest.c \
			comparatorsTest.c
OBJ = $(SRC:.c=.o)

all: $(BIN)

%.o:	%.c
		@$(CC) -o $@ -c $< $(INC_PATH) $(CFLAGS)

$(BIN):	$(OBJ)
	@echo "*** COMPILING RUNTEST ***"
	@$(CC) -o $@ $^ $(LIB_PATH) $(LDFLAGS)
	@mv $(BIN) ./bin
	@echo "*** RUNTEST READY ***"

clean:
	@echo "*** CLEANING RUNTEST ***"
	@rm -rf *.o

mrproper:	clean
	@echo "*** MRPROPER RUNTEST ***"
	@rm -rf ./bin/$(BIN)

re:	mrproper all
