/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   05-Feb-2018
 * @Filename: getters.c
 * @Last modified by:   elkoiko
 * @Last modified time: 07-Feb-2018
 */

#include "stringLib.h"

char *s_getContent(String *str)
{
  return str->content;
}

char *s_getContentFrom(String *str, size_t index)
{
  if (index > (str->length - 1))
    return NULL;
  return &(str->content[index]);
}

size_t s_getLength(String *str)
{
  return str->length;
}
