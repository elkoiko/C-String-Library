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

typedef enum S_TYPE {
  ST_STRING,
  ST_CHARSTR
} S_TYPE;

String* s_construct(const char *);
void s_destroy(String *);
void s_init(String *, const char *);
void s_set(String *, void *, S_TYPE);
char *s_getContent(String *);
size_t s_getLength(String *);


#endif /* !STRING_LIB_H */
