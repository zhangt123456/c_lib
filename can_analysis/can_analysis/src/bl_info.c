/*
 * bl_info.c
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */

#include "bl_info.h"

void printInfo()
{
	printf("\n");
	printf("MAX_LOGIN_RETRY = %d\n", MAX_LOGIN_RETRY);
	printf("MAX_CAN_LINE = %d\n", MAX_CAN_LINE);
	printf("MAX_FILE_COUNT = %d\n", MAX_FILE_COUNT);

	for(int i=0;i<64;i++)
		printf("-");
	printf("\n");

}