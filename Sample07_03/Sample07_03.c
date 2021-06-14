/*
 * Sample07_03.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){


	int eng[5]={64, 72, 48, 58, 79};
	int mat[5]={52, 46, 33};
	int i,j;

	for(i = 0; i< 5; i++){
		printf("%d番目の人の点数は%d点です。\n", i+ 1, eng[i]);
	}
	for(j = 0; j< 5; j++){
		printf("%d番目の人の点数は%d点です。\n", j+ 1, mat[j]);
	}

	return 0;
}

