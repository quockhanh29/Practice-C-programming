/*
 * Sample04_16.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int d;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("直径の値を整数（メートル）で入力してください\n");
	scanf("%d", &d);
	getchar();

	printf("円の面積は: %.2f", ((d*d)/4)*3.14 );

	return 0;

}

