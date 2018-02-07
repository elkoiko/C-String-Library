/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   07-Feb-2018
 * @Filename: comparators.c
 * @Last modified by:   elkoiko
 * @Last modified time: 07-Feb-2018
 */

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
