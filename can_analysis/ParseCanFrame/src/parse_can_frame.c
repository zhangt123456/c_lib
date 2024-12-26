/*
 ============================================================================
 Name        : parse_can_frame.c
 Author      : zht
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "parse_base.h"

int main(void) {
	for(int i =0;i<NODE_NUM;i++)
	printf("node_name[%-2d] = %s\n",i,node_name[i]); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
