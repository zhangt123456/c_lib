/*
 ============================================================================
 Name        : fgetline_demo.c
 Author      : zht
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "fgetline.h"

#define file_path "abc.txt"
int main(void) {

	char s[128] = {0};
	FILE *fb = fopen(file_path,"r");

	if(fb!=NULL)
	{
		fgetline(s,sizeof(s)/sizeof(s[0]),fb);
	}
	else
	{
		printf("can not find file!!\n");
	}

	fclose(fb);

	system("pause");
	return EXIT_SUCCESS;
}
