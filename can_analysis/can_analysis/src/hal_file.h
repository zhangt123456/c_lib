/*
 * hal_file.h
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */

#ifndef HAL_FILE_H_
#define HAL_FILE_H_

char CSV_HEAD_cn[]="序号,传输方向,第几路CAN,时间标识,增量时间,帧 ID,帧类型,帧格式,数据长度,数据,";
char TXT_HEAD[]="0,";

char CSV_EXTENSION[] = ".csv";
char TXT_EXTENSION[] = ".txt";

typedef struct{
	char identity[100];
	char direction[100];
	char channel[100];
	char time[100];
	char delt_time[100];
	char fid[100];
	char ftype[100];
	char fformat[100];
	char flen[100];
	char fdata[100];
}csv_raw;

void print_raw(csv_raw data)
{
	printf("data.identity :%s\n",data.identity);
	printf("data.direction :%s\n",data.direction);
	printf("data.channel :%s\n",data.channel);
	printf("data.time :%s\n",data.time);
	printf("data.delt_time :%s\n",data.delt_time);
	printf("data.fid :%s\n",data.fid);
	printf("data.ftype :%s\n",data.ftype);
	printf("data.fformat :%s\n",data.fformat);
	printf("data.flen :%s\n",data.flen);
	printf("data.fdata :%s\n",data.fdata);

}


typedef struct{
	char identity[100];
	char direction[100];
	char channel[100];
	char time[100];
	char delt_time[100];
	char fid[100];
	char ftype[100];
	char fformat[100];
	char flen[100];
	char fdata[100];
}txt_raw;

#endif /* HAL_FILE_H_ */
