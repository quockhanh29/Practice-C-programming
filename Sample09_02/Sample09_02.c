/*
 * Sample09_02.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int a;
	int b = 20;
	int *pa;

	pa = &a;

	printf("変数aのアドレスをボインタpaに代入しました\n");
	printf("変数aのアドレス:\t%p\n", &a);
	printf("ポインタPaの値：\t%p\n", pa);

	*pa = 10;

	printf("ポインタPaの指す値に値10を代入しました\n");
	printf("変数aの値:\t\t\t%d\n", a);
	printf("ポインタPaの指す値:\t%d\n", *pa);

	pa = &b;

	printf("変数bのアドレスをボインタpaに代入しました\n");
	printf("変数aのアドレス:\t%p\n", &a);
	printf("変数bのアドレス:\t%p\n", &b);
	printf("ポインタPaの値：\t%p\n", pa);

	printf("変数aの値:\t\t\t%d\n", a);
	printf("変数bの値:\t\t\t%d\n", b);
	printf("ポインタPaの指す値:\t%d\n", *pa);

	return 0;
}

