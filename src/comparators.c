/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   07-Feb-2018
 * @Filename: comparators.c
 * @Last modified by:   elkoiko
 * @Last modified time: 12-Feb-2018
 */

#include <string.h>
#include <stringLib.h>

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
  String *toCompare = NULL;
  size_t i = 0, j = 0, compareLength = 0;

  if (type == ST_STRING)
    toCompare = str2;
  else if (type == ST_CHARSTR)
    toCompare = s_construct((char *)str2);
  if (toCompare->length > str->length)
    return 0;
  i = str->length - toCompare->length;
  while (toCompare->content[j] != '\0' && toCompare->content[j] == str->content[i])
  {
    j++;
    i++;
  }
  compareLength = toCompare->length;
  if (type == ST_CHARSTR)
    s_destroy(toCompare);
  return (compareLength == j);
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
  return (str->length == i);
}

char *s_contains(String *str, void *str2, S_TYPE type)
{
  char *toCompare = NULL;
  size_t i = 0, j = 0;

  if (type == ST_STRING)
    toCompare = ((String *)str2)->content;
  else if (type == ST_CHARSTR)
    toCompare = (char *)str2;
  while (str->content[i])
  {
    j = 0;
    while (toCompare[j] != '\0' && str->content[i + j] != '\0'
            && toCompare[j] == str->content[i + j])
      j++;
    if (strlen(toCompare) == j)
      return &(str->content[i]);
    i++;
  }
  return NULL;
}
