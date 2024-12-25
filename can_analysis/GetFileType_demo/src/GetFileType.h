/*
 * GetFileTpye.h
 *
 *  Created on: 2024Äê12ÔÂ25ÈÕ
 *      Author: zht
 */

#ifndef GETFILETYPE_H_
#define GETFILETYPE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CSV_EXTENSION ".csv"
#define TXT_EXTENSION ".txt"
#define LOG_EXTENTION ".log"
#define TESULT_EXTENTION "_parse.csv"


#define IS_CSV_FILE			1
#define IS_TXT_FILE			2
#define UNKMOWN_FILE_TYPE	3

#define NOT_EXIST			4
#define FILE_NOT_EXIST		5
#define FLIE_PATH_ILLEGAL	6
#define SHOULD_NEVER_HAPPEN	7
#define NOT_ENOUGH_SPACE    8

int getFileType(char file_path[]);

int GenFilePath(
		char filePath[],
		char *outpath,
		int  len,
		char extension[]);

#endif /* GETFILETYPE_H_ */
