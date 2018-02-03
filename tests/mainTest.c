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

int main(void)
{
  String *str = NULL;

  printf("*** Constructing a String ***\n");
  str = s_construct("Hello World!\n");
  printf("String length : %lu\n", str->length);
  printf(str->content);
  printf("***Destroying String ***\n");
  s_destroy(str);
  return 0;
}
