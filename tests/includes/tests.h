/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   04-Feb-2018
 * @Filename: tests.h
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
 */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include "stringLib.h"

# define BEGIN_GREEN ("\033[0;32m")
# define BEGIN_YELLOW ("\033[0;33m")
# define END_COLOR   ("\033[0m")

void describe(String *);
void printHeader(char *, char *);
void testSetters(String *, String *);
void testGetters(String *);

#endif /* !TESTS_H */
