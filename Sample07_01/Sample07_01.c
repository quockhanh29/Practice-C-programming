/*
 * Sample07_01.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){

	int sum = 0;
	int eng[5];
	int i;

	eng[0]=64;
	eng[1]=72;
	eng[2]=48;
	eng[3]=58;
	eng[4]=79;

	for(i = 0; i< 5; i++){
		printf("%d番目の人の点数は%d点です。\n", i+ 1, eng[i]);
		sum += eng[i];
	}
	printf("平均点は%f点です。\n", (double)sum/5);

	return 0;
}

