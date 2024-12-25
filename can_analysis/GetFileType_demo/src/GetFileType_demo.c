/*
 ============================================================================
 Name        : GetFileType_demo.c
 Author      : zht
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include "GetFileType.h"

char CSV_PATH[100] =  "aBc.CSv";
char TXT_PATH[100] = "abc.txt";

char log_path[128] = {0};
char result_path[128];

int main(void) {

	printf("FILE_PATH = %s\n",CSV_PATH);
	printf("CSV_EXTENSION =%s\n",CSV_EXTENSION);
	printf("TXT_EXTENSION =%s\n",TXT_EXTENSION);

	getFileType(CSV_PATH);

	printf("0000000000000000000\n");

	printf("log_path = %s\n",log_path);

	GenFilePath(CSV_PATH,
			log_path,
			sizeof(log_path)/sizeof(log_path[0]),
			LOG_EXTENTION);

	printf("log_path = %s\n",log_path);

	printf("0000000000000000000\n");
	printf("result_path = %s\n",result_path);

	GenFilePath(CSV_PATH,
			result_path,
			sizeof(result_path)/sizeof(result_path[0]),
			TESULT_EXTENTION);

	printf("result_path = %s\n",result_path);

	system("pause");
	return EXIT_SUCCESS;
}
