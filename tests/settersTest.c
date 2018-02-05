/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   04-Feb-2018
 * @Filename: settersTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
 */

#include "tests.h"

void testSetters(String *str, String *str2)
{
  printHeader("\n*** Setting from a character string ***\n", BEGIN_YELLOW);
  s_set(str, "Content from a character string\n", ST_CHARSTR);
  describe(str);
  printHeader("\n*** Setting content from an other String Object ***\n", BEGIN_YELLOW);
  s_set(str, str2, ST_STRING);
  describe(str);
  printHeader("\n*** Setting content from NULL pointer ***\n", BEGIN_YELLOW);
  describe(str);
  printHeader("*** Setters tests passed ****\n", BEGIN_GREEN);
}
