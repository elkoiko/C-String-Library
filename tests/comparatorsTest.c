/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   07-Feb-2018
 * @Filename: comparatorsTest.c
 * @Last modified by:   elkoiko
 * @Last modified time: 12-Feb-2018
 */

#include "tests.h"

#define BOOL_RES(X) ((X) ? "YES" : "NO")

void testComparators(String *str, String *str2)
{
  /* Is numeric */
  printHeader("\n*** Is numeric ? ***\n", BEGIN_YELLOW);
  s_set(str, "0813406531234", ST_CHARSTR);
  printf("Content : %s\t Is numeric ? => %s\n", s_getContent(str), BOOL_RES(s_isNumeric(str)));
  s_set(str, "O81@ç|[3406ddec531234", ST_CHARSTR);
  printf("Content : %s\t Is numeric ? => %s\n", s_getContent(str), BOOL_RES(s_isNumeric(str)));
  /* Is alphanumeric */
  printHeader("\n*** Is alphanumeric ? ***\n", BEGIN_YELLOW);
  s_set(str, "0813406531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));
  s_set(str, "0fzeze813ATREN406I531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));
  s_set(str, "0fzeze813ATREN@[406I531234", ST_CHARSTR);
  printf("Content : %s\t Is alphanumeric ? => %s\n", s_getContent(str), BOOL_RES(s_isAlphaNumeric(str)));
  /* Begins With */
  printHeader("\n*** Begins with ***\n", BEGIN_YELLOW);
  s_set(str, "I'm a teapot with green tea", ST_CHARSTR);
  s_set(str2, "I'm a teapot", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
  s_getContent(str), s_getContent(str2), BOOL_RES(s_beginsWith(str, str2, ST_STRING)));
  s_set(str, "I'm a teapot", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
          s_getContent(str), "I'm a teapot with green tea", BOOL_RES(s_beginsWith(str, "I'm a teapot with green tea", ST_CHARSTR)));
  s_set(str2, str, ST_STRING);
  printf("Content str1: %s\tContent str2: %s\t str1 begins with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_beginsWith(str, str2, ST_STRING)));
  /* Ends With */
  printHeader("\n*** Ends with ***\n", BEGIN_YELLOW);
  s_set(str, "I'm happy with green tea", ST_CHARSTR);
  s_set(str2, "with green tea", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 ends with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_endsWith(str, str2, ST_STRING)));
  s_set(str, "I'm happy with green tea", ST_CHARSTR);
  s_set(str2, "with black tea", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 ends with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_endsWith(str, str2, ST_STRING)));
  s_set(str, "I'm happy with green tea", ST_CHARSTR);
  s_set(str2, str, ST_STRING);
  printf("Content str1: %s\tContent str2: %s\t str1 ends with str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_endsWith(str, str2, ST_STRING)));
  /* Equals */
  printHeader("\n*** Equals ***\n", BEGIN_YELLOW);
  s_set(str, "I'm a classic string", ST_CHARSTR);
  s_set(str2, str, ST_STRING);
  printf("Content str1: %s\tContent str2: %s\t str1 equals str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_equals(str, str2, ST_STRING)));
  s_set(str, "I'm a classic string", ST_CHARSTR);
  s_set(str2, "I'm not equal", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 equals str2 content ? => %s\n",
          s_getContent(str), s_getContent(str2), BOOL_RES(s_equals(str, str2, ST_STRING)));

  /* Contains */
  printHeader("\n*** Contains ***\n", BEGIN_YELLOW);
  s_set(str, "I'm a classic string", ST_CHARSTR);
  s_set(str2, "classic", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 contains str2 ? => %s\n",
          s_getContent(str), s_getContent(str2), s_contains(str, str2, ST_STRING));
  s_set(str, "I'm a classic string", ST_CHARSTR);
  s_set(str2, "classic string longer", ST_CHARSTR);
  printf("Content str1: %s\tContent str2: %s\t str1 contains str2 ? => %s\n",
          s_getContent(str), s_getContent(str2), s_contains(str, str2, ST_STRING));

  printHeader("*** Comparators tests passed ****\n", BEGIN_GREEN);
}
