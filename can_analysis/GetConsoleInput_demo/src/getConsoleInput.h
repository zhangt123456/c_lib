/*
 * get_console_input.h
 *
 *  Created on: Dec 22, 2024
 *      Author: zht
 */

#ifndef GETCONSOLEINPUT_H_
#define GETCONSOLEINPUT_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>
#include <ctype.h>

/*
 * get information from console
 */
void get_info(char *s, int slen, char mask)
{
	char c;
	int i = 0;
	//enter finish input
	while( (c = getch()) != '\r')
	{
		//enter 0x13 '\r'

		if(c == '\b')
		{
			//backspace 0x08 '\b'

			if(i > 0)
			{
				putchar('\b');
				putchar(' ');
				putchar('\b');

				i--;
				s[i]='\0';
			}
		}
		else if(isdigit(c) | isalpha(c) | ispunct(c))
		{
			if(mask== 0)
				putchar(c);
			else
				putchar(mask);

			s[i] = c;
			i++;
			if(i>=slen)
			{
				s[i] = '\0';
				break;
			}
		}

	}//while
}//end of function


#endif /* GETCONSOLEINPUT_H_ */
