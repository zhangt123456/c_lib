/*
 * string2digit.h
 *
 *  Created on: 2024��12��20��
 *      Author: zht
 */

#ifndef STRING2DIGIT_H_
#define STRING2DIGIT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "z_types.h"

//u8 char2num(char c);

u8  string2byte(char *s);
u16 string2word(char *s);
u32 string2Dword(char *s);
u64 string2Lword(char *s);

u64 string2hex(char *s);

u8 string2array(char *s , u8 *V);
u8 string2vector(char *s , u8 *v);

u8 removeSpace(char *s, char delim);


#endif /* STRING2DIGIT_H_ */