/**
* @Author: Thomas Couacault <elkoiko>
* @Date:   01-Feb-2018
* @Filename: mainTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 04-Feb-2018
*/

#include <stdlib.h>
#include <stdio.h>
#include "stringLib.h"

#define BEGIN_GREEN ("\033[0;32m")
#define END_COLOR   ("\033[0m")

static void describe(String *str)
{
  printf("String length : %lu\n", s_getLength(str));
  printf("Content : \t%s", s_getContent(str));
}

int main(void)
{
  String *str = NULL, *str2 = NULL;

  /** Constructing a String object **/
  printf("%s*** Constructing a String object ***\n%s", BEGIN_GREEN, END_COLOR);
  str = s_construct("Hello World!\n");
  describe(str);

  /** Setting from a character string **/
  printf("%s\n*** Setting from a character string ***\n%s", BEGIN_GREEN, END_COLOR);
  s_set(str, "Content from a character string\n", ST_CHARSTR);
  describe(str);

  /** Setting from an other String Object **/
  printf("%s\n*** Setting from an other String Object ***\n%s", BEGIN_GREEN, END_COLOR);
  str2 = s_construct("New content from another String Object\n");
  s_set(str, str2, ST_STRING);
  describe(str);

  /** Destroying String objects **/
  s_destroy(str);
  s_destroy(str2);
  return 0;
}
