/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   05-Feb-2018
 * @Filename: setters.c
 * @Last modified by:   elkoiko
 * @Last modified time: 12-Feb-2018
 */

#include <string.h>
#include "stringLib.h"

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

void s_upper(String *str)
{
    size_t i = 0;

    while (str->content[i])
    {
      if (str->content[i] >= 'a' && str->content[i] <= 'z')
        str->content[i] += 'A' - 'a';
      i++;
    }
}

void s_lower(String *str)
{
  size_t i = 0;

  while (str->content[i])
  {
    if (str->content[i] >= 'A' && str->content[i] <= 'Z')
      str->content[i] -= 'A' - 'a';
    i++;
  }
}

void s_reverse(String *str)
{
  size_t limit = str->length - 1;
  size_t i = 0;
  char tmp = 0;

  while (i < (str->length / 2))
  {
    tmp = str->content[i];
    str->content[i] = str->content[limit];
    str->content[limit] = tmp;
    i++;
    limit--;
  }
}

void s_replace(String *str, char current, char new)
{
    size_t i = 0;

    while (i < str->length)
    {
      if (str->content[i] == current)
        str->content[i] = new;
      i++;
    }
}
