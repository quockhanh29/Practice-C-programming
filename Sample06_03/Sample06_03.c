/*
 * Sample06_03.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int i = 1;
	int sum = 0;
	int sump = 0;

	while( i <= 10 ) {
		sump = sum;
		sum += i;
		printf(" %d + %d = %d\n", sump, i, sum);
		i++;
	}
	printf("1から 10 までの和は %d です。\n", sum);

	return 0;
}

