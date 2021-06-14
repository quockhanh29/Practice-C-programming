/*
 * Sample07_02.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){

	int sum = 0;
	int eng[5];
	int i,j;

	setvbuf(stdout, NULL, _IONBF, 0);

	for(i =0; i< 5; i++){
		printf("%d番目の人の点数を入力！", i + 1);
		scanf("%d", &eng[i]);
		sum += eng[i];
	}
	for( j = 0; j< 5; j++){
		printf("%d番目の人の点数は%d点です。\n", j + 1, eng[j]);
	}
	printf("平均点は%f点です。\n", (double)sum/5);

	return 0;

}

