/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   01-Feb-2018
 * @Filename: stringLib.h
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
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

/* BASIC METHODS */
String* s_construct(const char *);
void s_destroy(String *);
void s_init(String *, const char *);
/* SETTERS */
void s_set(String *, void *, S_TYPE);
/* GETTERS */
char *s_getContent(String *);
char *s_getContentFrom(String *, size_t);
size_t s_getLength(String *);
/* COMPARATORS */


#endif /* !STRING_LIB_H */
