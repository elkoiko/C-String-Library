/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   07-Feb-2018
 * @Filename: comparatorsTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 07-Feb-2018
 */

#include "tests.h"

#define BOOL_RES(X) ((X) ? "YES" : "NO")

void testComparators(String *str, String *str2)
{
  printHeader("\n*** Is numeric ? ***\n", BEGIN_YELLOW);
  s_set(str, "0813406531234", ST_CHARSTR);
  printf("Content : %s\t Is numeric ? => %s\n", s_getContent(str), BOOL_RES(s_isNumeric(str)));
  s_set(str, "O81@ç|[3406ddec531234", ST_CHARSTR);
  printf("Content : %s\t Is numeric ? => %s\n", s_getContent(str), BOOL_RES(s_isNumeric(str)));

  printHeader("\n*** Is alphanumeric ? ***\n", BEGIN_YELLOW);
  s_set(str, "0813406531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));
  s_set(str, "0fzeze813ATREN406I531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));
  s_set(str, "0fzeze813ATREN@[406I531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));

  printHeader("\n*** Begins with ***\n", BEGIN_YELLOW);
  s_set(str, "I'm a teapot with green tea", ST_CHARSTR);
  s_set(str2, "I'm a teapot", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
  s_getContent(str), s_getContent(str2), BOOL_RES(s_beginsWith(str, str2, ST_STRING)));
  s_set(str, "I'm a teapot", ST_CHARSTR);
  s_set(str2, "I'm a teapot with green tea", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_beginsWith(str, str2, ST_STRING)));
  s_set(str2, "I'm a cup of coffee", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_beginsWith(str, str2, ST_STRING)));

  printHeader("*** Comparators tests passed ****\n", BEGIN_GREEN);
}
