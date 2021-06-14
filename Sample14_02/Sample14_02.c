/*
 * Sample14_02.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main(void){

	int i1 = 123;
	int i2 = 234;
	double d1 = 45.6;
	double d2 = 34.5;

	printf("MAX(i1, i2) => %d\n", MAX(i1, i2));
	printf("MAX(d1, d2) => %f\n", MAX(d1, d2));

	printf("MAX(i1++, i2++) => %d\n", MAX(i1++, i2++));

	printf("i1の値は%dです.\n", i1);
	printf("i2の値は%dです.\n", i2);

	return 0;
}

