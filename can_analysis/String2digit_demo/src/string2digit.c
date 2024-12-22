/*
 * string2digit.c
 *
 *  Created on: 2024Äê12ÔÂ20ÈÕ
 *      Author: zht
 */

#include "string2digit.h"

u8 char2num(char c)
{

	if(c>='0' && c<= '9')
		return c-'0';
	else if(c>='a' && c<='f')
		return c-'a'+10;
	else if(c>='A' && c<='F')
		return c-'A'+10;
	else
		return (u8)0;
}

u8 string2byte(char *s)
{
	int len = strlen(s);
	char c=0;

	for(int i=0;i<=1;i++)
		if(len-1-i>=0)
			c |= char2num(s[len-1-i])<<(4*i);
	return c;

}

u64 string2hex(char *s)
{
	u64 c=0;

	int len = strlen(s);
	int i_max = sizeof(u64)*2;

	for(int i=0;i<i_max;i++)
	{
		if(len-1-i>=0){
			c |= ( (u64)char2num(s[len-1-i])<<(4*i) );
		}
		else{
			break;
		}
	}
	return c;
}

u8 string2array(char *s , u8 *v)
{

	int s_len = strlen(s);
	int v_len = sizeof(v)*2;
	int i_max;

	if(s_len>v_len)
		i_max = v_len;
	else
		i_max = s_len;

	for(int i=0;i<i_max;i++)
	{

		v[i/2] |= char2num(s[i])<<( 4*( (i+1)%2 ) );

	}

	return 0;
}

u8 removeSpace(char *s, char delim)
{
	char *p = s;

	while( *s != '\0')
	{
		if(*s != delim)
			*p++ = *s;
		s++;
	}

	*p = '\0';

	return 0;
}
