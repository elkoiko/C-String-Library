/**
* @Author: Thomas Couacault <elkoiko>
* @Date:   01-Feb-2018
* @Filename: mainTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
*/

#include "tests.h"

void describe(String *str)
{
  printf("String length : %lu\n", s_getLength(str));
  printf("Content : \t%s", s_getContent(str));
}

void printHeader(char *str, char *beginColor)
{
  printf("%s%s%s", beginColor, str, END_COLOR);
}

int main(void)
{
  String *str = s_construct("Hello World!\n");
  String *str2 = s_construct("New content from another String Object\n");

  /* CONSTRUCT */
  printHeader("*** Constructing a String object ***\n", BEGIN_YELLOW);
  describe(str);
  /* GETTERS */
  testGetters(str);
  /* SETTERS */
  testSetters(str, str2);
  /* DESTRUCT */
  printHeader("*** Destroying a String object ***\n", BEGIN_YELLOW);
  s_destroy(str);
  s_destroy(str2);
  printHeader("*** Destroying a NULL pointer ***\n", BEGIN_YELLOW);
  s_destroy(NULL);

  return 0;
}
