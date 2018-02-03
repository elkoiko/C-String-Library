# @Author: Thomas Couacault <elkoiko>
# @Date:   01-Feb-2018
# @Filename: Makefile
# @Last modified by:   elkoiko
# @Last modified time: 04-Feb-2018

export CC=gcc
export CFLAGS=-W -Wall -ansi -pedantic
export LDFLAGS=
INC_PATH=-I./includes
LIB_PATH=./lib/
TEST_PATH=./tests/
LIB=libcString.a
SRC= src/string.c
OBJ= $(SRC:.c=.o)

all: $(LIB)

%.o:	%.c
	@$(CC) -o $@ -c $< $(INC_PATH) $(CFLAGS)

$(LIB): $(OBJ)
	@echo "*** COMPILING C STRING LIBRARY ***"
	@ar -rcs -o $(LIB) $(OBJ)
	@mv $(LIB) $(LIB_PATH)
	@echo "*** C STRING LIBRARY READY ***"

test: all
	@(cd $(TEST_PATH) && $(MAKE))

clean:
	@echo "*** CLEANING LIBRARY BINARIES ***"
	@rm -rf $(OBJ)
	@(cd $(TEST_PATH) && $(MAKE) $@)

mrproper:	clean
	@echo "*** MRPROPER LIBRARY ***"
	@rm -rf $(LIB_PATH)$(LIB)
	@(cd $(TEST_PATH) && $(MAKE) $@)
