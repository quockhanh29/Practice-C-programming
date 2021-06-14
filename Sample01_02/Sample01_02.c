/*
 * Sample01_02.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include <stdio.h>

/*
 * 1から１０００まで足す
 */
int main(void){

	int sum = 0;
	int sump;
	int i;

	for (i = 1 ; i<=1000; i++) {
		sump = sum;

		sum =sum + i;

		printf ("%d+%d=%d\n", sump, i, sum);
	}
	return 0;
}

