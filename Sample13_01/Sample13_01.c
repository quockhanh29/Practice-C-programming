/*
 * Sample13_01.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include<stdio.h>

int main(void){

	int i = 123;
	double d = 123.45;

	printf("%%dによる出力: %d\n", i);
	printf("%%xによる出力: %08x\n", i);
	printf("%%fによる出力: %7.5f\n", d);
	printf("%%eによる出力: %e\n", d);

	return 0;

}

