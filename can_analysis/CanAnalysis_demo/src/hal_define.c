/*
 * hal_define.c
 *
 *  Created on: Dec 22, 2024
 *      Author: zht
 */

#include "hal_define.h"

void drawLine(int len, char c )
{
	for(int i=0; i <len;i++) printf("%c",c);
	printf("\n");
}
