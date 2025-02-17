/*
 * fml_user.h
 *
 *  Created on: Dec 20, 2024
 *      Author: zht
 */

#ifndef FML_USER_H_
#define FML_USER_H_

#include "hal_user.h"
#include "hal_define.h"

USER_INPUT user_input;
USER_INFO user_info;

int get_user_info();
int calculate_user_info_md5();
int check_user_info_head();
int userInfo2Struct(char *d);
int user_check();


#endif /* FML_USER_H_ */
