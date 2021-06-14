/*
 * Sample03_06.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>


int main(void){

	int a;
	int b;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("aの値を入力してください\n");
	scanf("%d", &a);
	getchar();

	printf("bの値を入力してください\n");
	scanf("%d", &b);
	getchar();

	printf("%d*%d=%d\n", a, b, a*b);

	return 0;
}
