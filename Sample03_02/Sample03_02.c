/*
 * Sample03_02.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>

/*
 * 変数に他の変数の値を代入
 */
int main(void){

	int number1 = 123;
	int number2 = 234;

	printf("number1の値は%dです。\n", number1);

	number1 = number2;

	printf("number1の新しい値は%dです。\n", number1);

	return 0;
}
