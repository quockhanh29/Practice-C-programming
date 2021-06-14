/*
 * Sample08_10.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>
#include "max5.h"

int main(void){

	int a[5];
	int i, max;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("5つの整数の最大値を表示します\n");

	for(i = 0; i < 5; i++){
		printf("%d番目の数を入力:", i+1);
		scanf("%d", &a[i]);
	}

	max = max5(a[0], a[1], a[2], a[3], a[4]);

	printf("5つの整数の最大値は %d です。", max);

	return 0;

}

