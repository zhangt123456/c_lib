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
				//��ӡ������Ϣ
				printInfo();
				next_state = 1;
			}break;

			case 1:
			{
				//ȷ���Ƿ���������Ҫ����
				printf("curr_state = %d\n",curr_state);
				next_state = 2;
			}break;

			case 2:
			{
				//ȷ���û���Ϣ
				printf("curr_state = %d\n",curr_state);

				get_user_info();

				if(user_check() == 0)
					next_state = 3;
				else
					next_state = 4;
			}break;

			case 3:
			{
				//�ļ�����
				printf("curr_state = %d\n",curr_state);
				next_state = 4;
			}break;

			case 4:
			{
				//
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