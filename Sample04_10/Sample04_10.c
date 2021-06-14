/*
 * Sample04_10.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include<stdio.h>

int main(void){

	int a = 1;
	double b = 1.0;

	printf("char型:\t\t\t%dバイト\n", (int)sizeof(char));
	printf("short int型:\t\t\t%dバイト\n", (int)sizeof(short int));
	printf("int型:\t\t\t%dバイト\n", (int)sizeof(int));
	printf("float型:\t\t\t%dバイト\n", (int)sizeof(float));
	printf("double型:\t\t%dバイト\n", (int)sizeof(double));
	printf("変数a:\t\t\t%dバイト\n", (int)sizeof(a));
	printf("変数b:\t\t\t%dバイト\n", (int)sizeof(b));
	printf("式a+b:\t\t\t%dバイト\n", (int)sizeof(a+b));

	return 0;

}

