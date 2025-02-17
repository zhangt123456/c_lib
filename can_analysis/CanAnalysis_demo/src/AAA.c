/*
 ============================================================================
 Name        : can_analysis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "AAA.h"

int curr_state = 0;
int next_state = 0;

int main(int argc, char* argv[])
{

	while(1)
	{
		switch(curr_state)
		{
			case 0:
			{
				//打印软件信息
				printInfo();
				next_state = 1;
			}break;

			case 1:
			{
				//确认是否有软件需要分析
				drawLine(64,'-');
				printf("curr_state = %d\n",curr_state);

				if(argc > 1){

					printf("共输入%d个文件:\n",argc-1);
					for(int i=1;i<argc;i++)
					{
						printf("%2d/%d: ",i,argc-1);
						printf("path = %s\n",argv[i]);
					}

					next_state = 2;
				}
				else
				{
					printf("没有指定解析文件路径！\n");
					next_state = 4;
				}
			}break;

			case 2:
			{
				//确认用户信息
				drawLine(64, '-');
				printf("curr_state = %d\n",curr_state);

				get_user_info();

				if(user_check() == 0)
					next_state = 3;
				else
					next_state = 4;
			}break;

			case 3:
			{
				//文件分析
				drawLine(64, '-');
				printf("curr_state = %d\n",curr_state);
				next_state = 4;
			}break;

			case 4:
			{
				//
				drawLine(64, '-');
				printf("curr_state = %d\n",curr_state);
				system("pause");
				return 0;
			}break;


			default: {
				printf("This should not run");
				return 0;
			}
		}

		curr_state = next_state;
	}



	return EXIT_SUCCESS;
}
