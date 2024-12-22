/*
 * fml_user.c
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */
#include <stdio.h>
#include "fml_user.h"

int get_user_info()
{
	printf("user name:");
	gets(user_input.name);
	printf("user_input.name = %s\n",user_input.name);

	printf("pass word:");
	gets(user_input.password);
	printf("user_input.password = %s\n",user_input.password);

	return 0;
}

int check_user_info_head()
{
	//char user_info_line[128];
	FILE *fb = fopen(USER_INFO_PATH,"r");

	fclose(fb);

	return 0;
}

///////////////////////////////////////////////////////
int userInfo2Struct(char *d)
{
	char *delim = ",";

	char *token = strtok(d,delim);
	int i = 0;

	while(token != NULL){
		//printf("%s\n",token);
		switch(i)
		{
		case 0 : strcpy(user_info.id			,token); break;
		case 1 : strcpy(user_info.group 		,token); break;
		case 2 : strcpy(user_info.real_name 	,token); break;
		case 3 : strcpy(user_info.name_md5 		,token); break;
		case 4 : strcpy(user_info.passworld_md5 	,token); break;
		}
		token = strtok(NULL,delim);
		i++;
		if(i>=5) break;
	}

	return 0;
}

char *fgetline(char *str, int n, FILE *stream)
{
	fgets(str, n, stream);

	if(str != NULL)
	{
		int slen = strlen(str);
		printf("slen = %d\n",slen);
		str[slen-1]=0;
	}

	return str;
}//end of function

int user_check()
{

	char user_info_line[128] = {0};


	FILE *fb;


	fb = fopen(USER_INFO_PATH,"r");
	//check file
	if(fb == NULL)
	{
		printf("can not find user_info.csv\n");
		return 1;
	}

	//get head line
	if(fgetline(user_info_line,128,fb)==NULL)
	{
		printf("get head line failed!!\n");
		fclose(fb);
		return 2;
	}

	//check head line
	if(strcmp(user_info_line, user_info_head) != 0)
	{
		printf("user_info_line = %s\n",user_info_line);
		printf("strlen(user_info_line) = %d\n",(int)strlen(user_info_line));

		printf("user_info_head = %s\n",user_info_head);
		printf("strlen(user_info_head) = %d\n",(int)strlen(user_info_head));
		printf("usr_info.csv headline wrong!!\n");
		fclose(fb);
		return 3;
	}

	//get user info
	while(fgetline(user_info_line,128,fb) != NULL)
	{
		userInfo2Struct(user_info_line);
		if( strcmp(user_info.name_md5, user_input.name) ==0 )
		{
			if( strcmp(user_info.passworld_md5, user_input.password) ==0 )
			{
				fclose(fb);
				return 0;
			}
			else
			{
				printf("user name or password wrong!!\n");
				printf("user_info.passworld_md5 = %s\n",user_info.passworld_md5);
				printf("strlen(user_info.passworld_md5) = %d\n",(int)strlen(user_info.passworld_md5));
				printf("user_input.password = %s\n",user_input.password);
				printf("strlen(user_input.password) = %d\n",(int)strlen(user_input.password));
				fclose(fb);
				return 4;
			}
		}
	}



	fclose(fb);

	return 5;
}