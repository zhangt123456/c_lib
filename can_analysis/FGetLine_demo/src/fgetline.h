/*
 * fgetline.h
 *
 *  Created on: Dec 22, 2024
 *      Author: zht
 */

#ifndef FGETLINE_H_
#define FGETLINE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * getline from file without '\r'
 */
char *fgetline(char *str, int n, FILE *stream)
{
	fgets(str, n, stream);

	if(str != NULL)
	{
		int slen = strlen(str);

		printf("%s line%-4d str = |%s|\n",__FILE__,__LINE__,str);
		printf("%s line%-4d slen = %d\n",__FILE__,__LINE__,slen);

		str[slen-1]=0;

		printf("%s line%-4d str = |%s|\n",__FILE__,__LINE__,str);
		printf("%s line%-4d slen = %d\n",__FILE__,__LINE__,slen);
	}

	return str;
}//end of function

#endif /* FGETLINE_H_ */
