/**
 * @Author: Thomas Couacault <elkoiko>
 * @Date:   05-Feb-2018
 * @Filename: setters.c
 * @Last modified by:   elkoiko
 * @Last modified time: 05-Feb-2018
 */

#include <stdlib.h>
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
