/*
 ============================================================================
 Name        : console_input_demo.c
 Author      : zht
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
	//�س���������
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

int main(void) {

	char s[5]={0};

	printf("user name:");
	get_info(s,sizeof(s)/sizeof(s[0]),'\0');
	printf("\n");
	printf("s = %s\n",s);

	printf("\n");
	s[0]='\0';
	printf("password:");
	get_info(s,sizeof(s)/sizeof(s[0]),'*');
	printf("\n");
	printf("s = %s\n",s);


	system("pause");
	return EXIT_SUCCESS;
}
