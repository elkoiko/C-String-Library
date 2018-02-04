/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   01-Feb-2018
 * @Filename: string.c
 * @Last modified by:   elkoiko
 * @Last modified time: 04-Feb-2018
 */

#include <stdlib.h>
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

/*** SETTERS ***/

void s_set(String *str, void *newContent, S_TYPE type)
{
  if (newContent != NULL)
  {
    if (str->content)
      free(str->content);
    if (type == ST_STRING)
    {
      str->length = ((String *)newContent)->length;
      str->content = (char *) malloc(str->length + 1);
      strcpy(str->content, ((String *)newContent)->content);
    }
    else if(type == ST_CHARSTR)
      s_init(str, (char *)newContent);
  }
}

/*** GETTERS ***/

char *s_getContent(String *str)
{
  return str->content;
}

size_t s_getLength(String *str)
{
  return str->length;
}
