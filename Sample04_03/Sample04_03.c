/*
 * Sample04_03.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include <stdio.h>

int main(void){

	int number1;
	int number2;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("キーボードから整数を2つ入力\n");

	scanf("%d", &number1);
	scanf("%d", &number2);

	printf("%d + %d = %d\n", number1, number2, number1 + number2);

	return 0;
}

