/*
 * Sample04_09.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include<stdio.h>

int main(void){

	int a = 50;
	int b = 60;

	printf("ビット演算子の練習です\n");
	printf("%d | %d = %d\n", a, b, a|b);
	printf("%d & %d = %d\n", a, b, a&b);
	printf("~%d = %d\n", a, ~a);
	printf("%d << %d = %d\n", a, 2, a<<2);
	printf("%d >> %d = %d\n", a, 2, a>>2);

	return 0;
}

