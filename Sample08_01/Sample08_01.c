/*
 * Sample08_01.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>

void square( int num){

	int square;

	square = num * num;

	printf("%d の自乗は %d です。\n", num, square);
}

int main(void){

	int integer;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("自乗する整数を入力:");
	scanf("%d", &integer);

	square(integer);

	return 0;
}

