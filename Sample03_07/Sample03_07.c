/*
 * Sample03_07.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>


int main(void){

	double a;
	double b;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("aの値を入力してください\n");
	scanf("%lf", &a);
	getchar();

	printf("bの値を入力してください\n");
	scanf("%lf", &b);
	getchar();

	printf("%f/%f=%.2f\n", a, b, a/b);

	return 0;
}

