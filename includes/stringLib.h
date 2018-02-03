/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   01-Feb-2018
 * @Filename: stringLib.h
 * @Last modified by:   elkoiko
 * @Last modified time: 04-Feb-2018
 */

#ifndef STRING_LIB_H
# define STRING_LIB_H

typedef struct String {
  size_t  length;
  char    *content;
} String;

typedef union S_WRAPPER {
  char   *charptr;
  String *str;
} S_WRAPPER;

typedef enum S_TYPE {
  ST_STRING,
  ST_CHARPTR
} S_TYPE;

String* s_construct(const char *);
void s_destroy(String *);
void s_init(String *, const char *);

#endif /* !STRING_LIB_H */
