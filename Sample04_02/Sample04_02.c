/*
 * Sample04_02.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include<stdio.h>

int main(void){

	int number1 = 2;
	int number2 = 3;

	printf("%d+%dは%dです。\n", number1, number2, number1 + number2);

	number1 = number1 + 1;

	printf("number1の値に１を足すと%dとなります。\n", number1);

	return 0;

}

