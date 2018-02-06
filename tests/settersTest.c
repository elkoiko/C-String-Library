/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   04-Feb-2018
 * @Filename: settersTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 06-Feb-2018
 */

#include "tests.h"

void testSetters(String *str, String *str2)
{
  printHeader("\n*** Setting content from an other String Object ***\n", BEGIN_YELLOW);
  s_set(str, str2, ST_STRING);
  describe(str);
  printHeader("\n*** Setting content from NULL pointer ***\n", BEGIN_YELLOW);
  describe(str);
  printHeader("\n*** Setting from a character string ***\n", BEGIN_YELLOW);
  s_set(str, "ACh@R4ctER_6tr1Ngz", ST_CHARSTR);
  describe(str);
  printHeader("\n*** Upper String ***\n", BEGIN_YELLOW);
  printf("Before: %s\t", s_getContent(str));
  s_upper(str);
  printf("After : %s\n", s_getContent(str));
  printHeader("\n*** Lower String ***\n", BEGIN_YELLOW);
  printf("Before: %s\t", s_getContent(str));
  s_lower(str);
  printf("After : %s\n", s_getContent(str));
  printHeader("\n*** Reverse String ***\n", BEGIN_YELLOW);
  printf("Before: %s\t", s_getContent(str));
  s_reverse(str);
  printf("After : %s\n", s_getContent(str));
  printHeader("\n*** Replace a character ***\n", BEGIN_YELLOW);
  s_set(str, "Simple string with multiples i characters", ST_CHARSTR);
  printf("Before: %s\t", s_getContent(str));
  s_replace(str, 'i', 'K');
  printf("After : %s\n", s_getContent(str));
  printHeader("*** Setters tests passed ****\n", BEGIN_GREEN);
}
