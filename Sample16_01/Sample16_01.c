/*
 * Sample16_01.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>
#include"involution.h"

int main(void){

	int integer1;
	int integer2;
	int integer3;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("累乗される整数を入力:");
	scanf("%d", &integer1);

	printf("何乗しますか？:");
	scanf("%d", &integer2);

	integer3 = involution(integer1, integer2);

	printf("%dの%d乗は%dです。\n", integer1, integer2, integer3);

	return 0;
}

