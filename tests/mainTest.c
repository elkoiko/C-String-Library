/**
* @Author: Thomas Couacault <elkoiko>
* @Date:   01-Feb-2018
* @Filename: mainTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 04-Feb-2018
*/

#include "tests.h"

void describe(String *str)
{
  printf("String length : %lu\n", s_getLength(str));
  printf("Content : \t%s", s_getContent(str));
}

int main(void)
{
  String *str = s_construct("Hello World!\n");
  String *str2 = s_construct("New content from another String Object\n");

  /* CONSTRUCT */
  printf("%s*** Constructing a String object ***\n%s", BEGIN_YELLOW, END_COLOR);
  describe(str);
  /* SETTERS */
  testSetters(str, str2);
  /* DESTRUCT */
  printf("%s*** Destroying a String object ***\n%s", BEGIN_YELLOW, END_COLOR);
  s_destroy(str);
  s_destroy(str2);
  printf("%s*** Destroying a NULL pointer ***\n%s", BEGIN_YELLOW, END_COLOR);
  s_destroy(NULL);

  return 0;
}
