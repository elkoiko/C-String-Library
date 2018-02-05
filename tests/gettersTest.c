/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   05-Feb-2018
 * @Filename: gettersTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
 */

 #include "tests.h"

void testGetters(String *str)
{
  printHeader("\n*** Getting content from good index ***\n", BEGIN_YELLOW);
  printf("Address : %p\tContent:%s", s_getContentFrom(str, 6), s_getContentFrom(str, 6));
  printHeader("\n*** Getting content from wrong index ***\n", BEGIN_YELLOW);
  printf("Index : -1, Address : %p\n", s_getContentFrom(str, -1));
  printf("Index (length): %lu, Address : %p\n", s_getLength(str), s_getContentFrom(str, s_getLength(str)));
  printHeader("*** Getters tests passed ****\n", BEGIN_GREEN);
}
