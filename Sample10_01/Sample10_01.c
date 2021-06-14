/*
 * Sample10_01.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int test[5] = {10, 20, 30,40, 50};

	printf("test[0]の値は%dです\n", test[0]);
	printf("test[0]のアドレスは%pです\n", &test[0]);
	printf("test[0]のサイズは%dです\n",(int)sizeof(test[0]));

	printf("testの値は%dです\n", *test);
	printf("testのアドレスは%pです\n", test);
	printf("testのサイズは%dです\n",(int)sizeof(test));

	printf("test[1]の値は%dです\n", test[1]);
	printf("test[1]のアドレスは%pです\n", &test[1]);
	printf("test[1]のサイズは%dです\n",(int)sizeof(test[1]));

	return 0;
}

