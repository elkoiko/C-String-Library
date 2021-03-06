/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   01-Feb-2018
 * @Filename: string.c
 * @Last modified by:   elkoiko
 * @Last modified time: 07-Feb-2018
 */

#include <string.h>
#include "stringLib.h"

String* s_construct(const char *content)
{
  String *str = NULL;

  str = (String*) malloc(sizeof(String));
  s_init(str, content);
  return str;
}

void s_init(String *str, const char *content)
{
  str->length = strlen(content);
  str->content = (char *) malloc(str->length + 1);
  strcpy(str->content, content);
}

void s_destroy(String *str)
{
  if (str)
  {
      if (str->content)
        free(str->content);
      free(str);
  }
}
