/*
 * Sample06_05.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int i;
	int j;

	for( i = 2; i <= 9; i++){
		for ( j = 2; j <=9; j++){
			printf("%d x %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

