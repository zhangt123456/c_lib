/*
 * GetFileType.c
 *
 *  Created on: Dec 26, 2024
 *      Author: zht
 */

#include "GetFileType.h"

/*************************************************************
 *
 *
 *
 *************************************************************/
int getFileType(char file_path[])
{
	char *ret;

	if(file_path == NULL)
	{
		printf("%s: line%-4d file path do not exist!!\n",__FILE__, __LINE__);
		return FILE_NOT_EXIST;
	}

	ret = strrchr(file_path,'.');

	if(ret == NULL)
	{
		printf("%s: line%-4d file path illegal!!\n",__FILE__, __LINE__);
		return FLIE_PATH_ILLEGAL;
	}

	strlwr(ret);

	if(strcmp(ret, CSV_EXTENSION)==0)
	{
		printf("this is a CVS file.\n");
		return IS_CSV_FILE;
	}
	else if(strcmp(ret, TXT_EXTENSION)==0)
	{
		printf("this is a TXT file.\n");
		return IS_TXT_FILE;
	}
	else
	{
		printf("this is not a CSV or TXT file!!\n");
		printf("CSV_EXTENSION  =%s\n",CSV_EXTENSION);
		printf("TXT_EXTENSION  =%s\n",TXT_EXTENSION);
		printf("file extension =%s\n",ret);
		return UNKMOWN_FILE_TYPE;
	}

	printf("%s: line%-4d should never happen!!",__FILE__, __LINE__);
	return SHOULD_NEVER_HAPPEN;
}





/*************************************************************
 *
 *
 *
 *************************************************************/
int GenFilePath(
		char filePath[],
		char *outpath,
		int  len,
		char extension[])
{
	char *ret;

	if(filePath == NULL)
	{
		printf("%s: line%-4d file path do not exist!!\n",__FILE__, __LINE__);
		return FILE_NOT_EXIST;
	}

	if(extension == NULL)
	{
		printf("%s: line%-4d extension do not exist!!\n",__FILE__, __LINE__);
		return NOT_EXIST;
	}

	if(len <(strlen(filePath) + strlen(extension) - 4))
	{
		printf("sizeof(outpath) = %llu\n",sizeof(outpath));
		printf("strlen(filePath) = %llu\n",strlen(filePath));
		printf("strlen(extension) = %llu\n",strlen(extension));
		printf("%s: line%-4d outpath do not have enough space!!\n",__FILE__, __LINE__);
		return NOT_ENOUGH_SPACE;
	}

	strcpy(outpath,filePath);

	ret = strrchr(outpath,'.');

	if(ret == NULL)
	{
		printf("%s: line%-4d file path illegal!!\n",__FILE__, __LINE__);
		return FLIE_PATH_ILLEGAL;
	}

	strlwr(ret);

	if(strcmp(ret, CSV_EXTENSION)==0)
	{
		printf("this is a CSV file.\n");
		strcpy(ret, extension);
		return IS_CSV_FILE;
	}
	else if(strcmp(ret, TXT_EXTENSION)==0)
	{
		printf("this is a TXT file.\n");
		strcpy(ret, extension);
		return IS_TXT_FILE;
	}
	else
	{
		printf("this is not a CSV or TXT file!!\n");
		printf("CSV_EXTENSION  =%s\n",CSV_EXTENSION);
		printf("TXT_EXTENSION  =%s\n",TXT_EXTENSION);
		printf("file extension =%s\n",ret);
		return UNKMOWN_FILE_TYPE;
	}

	printf("%s: line%-4d should never happen!!",__FILE__, __LINE__);
	return SHOULD_NEVER_HAPPEN;

}

