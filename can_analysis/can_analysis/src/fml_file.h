/*
 * fml_file.h
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */

#ifndef FML_FILE_H_
#define FML_FILE_H_

const char *delim = ",";

int csv_line(char *d){
	token = strtok(data,delim);
	int i = 0;
	while(token != NULL){
		printf("%s\n",token);
		switch(i)
		{
			case 0 : strcpy(rawData.identity	,token); break;
			case 1 : strcpy(rawData.direction 	,token); break;
			case 2 : strcpy(rawData.channel 	,token); break;
			case 3 : strcpy(rawData.time 		,token); break;
			case 4 : strcpy(rawData.delt_time 	,token); break;
			case 5 : strcpy(rawData.fid 		,token); break;
			case 6 : strcpy(rawData.ftype 		,token); break;
			case 7 : strcpy(rawData.fformat 	,token); break;
			case 8 : strcpy(rawData.flen 		,token); break;
			case 9 : strcpy(rawData.fdata 		,token); break;
		}
		token = strtok(NULL,delim);
		i++;
	}
}



#endif /* FML_FILE_H_ */