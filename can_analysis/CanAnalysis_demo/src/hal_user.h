/*
 * hal_user.h
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */

#ifndef HAL_USER_H_
#define HAL_USER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define user_info_head  "用户编号,用户等级,姓名,账号,密码"


typedef struct{
	char name[32];
	char password[16];

	char name_md5[64];
	char password_md5[64];
}USER_INPUT;


typedef struct{
	char id[4];
	char group[16];
	char real_name[16];
	char name_md5[64];
	char passworld_md5[64];
}USER_INFO;

#endif /* HAL_USER_H_ */
