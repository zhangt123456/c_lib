/*
 ============================================================================
 Name        : console_input_demo.c
 Author      : zht
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "getConsoleInput.h"

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
