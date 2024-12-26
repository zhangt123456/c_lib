/*
 * parse_top.h
 *
 *  Created on: 2024Äê12ÔÂ26ÈÕ
 *      Author: zht
 */

#ifndef PARSE_BASE_H_
#define PARSE_BASE_H_

#include <stdio.h>

#define NODE_NUM 16

typedef enum {
    NODE_POWER   	= 0,	//0x0
    NODE_CONSOLE 	= 1,	//0x1
    NODE_GIC		= 2,	//0x2
    NODE_ECG     	= 3,	//0x3
    NODE_RIC     	= 4,	//0x4
    NODE_CTBOX   	= 5,	//0x5
    NODE_DISPLAY 	= 6,	//0x6
    NODE_COUCH   	= 7,	//0x7
    NODE_GANTRY  	= 8,	//0x8
    NODE_GEN     	= 9,	//0x9
    NODE_DM      	= 10,	//0xA
    NODE_COL     	= 11,	//0xB
    NODE_HEAT    	= 12,	//0xC
}node_id;


extern const char node_name[NODE_NUM][32];


#endif /* PARSE_BASE_H_ */
