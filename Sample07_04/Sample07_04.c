/*
 * Sample07_04.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>
#define NUM 10

int main(void){

	int sum = 0;
	int eng[NUM];
	int i,j;

	setvbuf(stdout, NULL, _IONBF, 0);

	for(i =0; i< NUM; i++){
		printf("%d番目の人の点数を入力！", i + 1);
		scanf("%d", &eng[i]);
		sum += eng[i];
	}
	for( j = 0; j< NUM; j++){
		printf("%d番目の人の点数は%d点です。\n", j + 1, eng[j]);
	}
	printf("平均点は%f点です。\n", (double)sum/NUM);

	return 0;

}


