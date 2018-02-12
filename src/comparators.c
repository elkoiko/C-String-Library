/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   07-Feb-2018
 * @Filename: comparators.c
 * @Last modified by:   elkoiko
 * @Last modified time: 12-Feb-2018
 */

#include <string.h>
#include <stringLib.h>
#include <stdio.h>

unsigned char s_isNumeric(String *str)
{
  size_t i = 0;

  while (str->content[i])
  {
    if (str->content[i] < '0' || str->content[i] > '9')
      return 0;
    i++;
  }
  return 1;
}

unsigned char s_isAlphaNumeric(String *str)
{
  size_t i = 0;

  while (str->content[i])
  {
    if ((str->content[i] < '0' || str->content[i] > '9')
        && (str->content[i] < 'a' || str->content[i] > 'z')
        && (str->content[i] < 'A' || str->content[i] > 'Z'))
      return 0;
    i++;
  }
  return 1;
}

unsigned char s_beginsWith(String *str, void *str2, S_TYPE type)
{
  char *toCompare = NULL;
  size_t compareLength = 0;
  size_t i = 0;

  if (type == ST_STRING)
  {
    toCompare = ((String *)str2)->content;
    compareLength = ((String *)str2)->length;
  }
  else if (type == ST_CHARSTR)
  {
    toCompare = (char *)str2;
    compareLength = strlen(toCompare);
  }
  while (toCompare[i] != '\0' && toCompare[i] == str->content[i])
    i++;
  return (compareLength == i);
}

unsigned char s_endsWith(String *str, void *str2, S_TYPE type)
{
  char *toCompare = NULL;
  long compareLength = 0;
  long i = 0, j = 0;

  if (type == ST_STRING)
  {
    toCompare = ((String *)str2)->content;
    compareLength = ((String *)str2)->length;
  }
  else if (type == ST_CHARSTR)
  {
    toCompare = (char *)str2;
    compareLength = strlen(toCompare);
  }
  if (compareLength > (long)str->length)
    return 0;
  i = compareLength - 1;
  j = str->length - 1;
  while (i >= 0 && j >= 0)
  {
    if (toCompare[i] != str->content[j])
      return 0;
    i--;
    j--;
  }
  return 1;
}

unsigned char s_equals(String *str, void *str2, S_TYPE type)
{
  char *toCompare = NULL;
  size_t i = 0;

  if (type == ST_STRING)
    toCompare = ((String *)str2)->content;
  else if (type == ST_CHARSTR)
    toCompare = (char *)str2;
  while (toCompare[i] != '\0' && toCompare[i] == str->content[i])
    i++;
  return !(str->length - i);
}
