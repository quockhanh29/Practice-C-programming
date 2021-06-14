/*
 * Sample04_07.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include<stdio.h>

int main(void){

	int i;
	double sum;

	sum =0.0;
	for(i = 0; i < 100; i++){
		sum = sum + 0.1;
	}
	printf("0.1を100回足した結果%f\n", sum);

	sum =0.0;
	for(i = 0; i < 10000; i++){
		sum = sum + 0.1;
	}
	printf("0.1を10000回足した結果%f\n", sum);

	sum =0.0;
	for(i = 0; i < 1000000; i++){
		sum = sum + 0.1;
	}
	printf("0.1を1000000回足した結果%f\n", sum);

	sum =0.0;
	for(i = 0; i < 100000000; i++){
		sum = sum + 0.1;
	}
	printf("0.1を100000000回足した結果%f\n", sum);

	return 0;
}

