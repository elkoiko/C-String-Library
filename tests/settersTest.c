/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   04-Feb-2018
 * @Filename: settersTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 04-Feb-2018
 */

#include "tests.h"

void testSetters(String *str, String *str2)
{
  printf("%s\n*** Setting from a character string ***\n%s", BEGIN_YELLOW, END_COLOR);
  s_set(str, "Content from a character string\n", ST_CHARSTR);
  describe(str);
  printf("%s\n*** Setting from an other String Object ***\n%s", BEGIN_YELLOW, END_COLOR);
  s_set(str, str2, ST_STRING);
  describe(str);
  printf("%s\n*** Setting from NULL pointer ***\n%s", BEGIN_YELLOW, END_COLOR);
  describe(str);
  printf("%s*** Setters tests passed ****%s\n", BEGIN_GREEN, END_COLOR);
}
