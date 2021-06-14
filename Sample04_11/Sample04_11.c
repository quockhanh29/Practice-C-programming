/*
 * Sample04_11.c
 *
 *  Created on: 2019/11/21
 *      Author: admin-pc
 */
#include<stdio.h>

int main(void){

	int inumber = 30;
	double dnumber;

	printf("1フィートは約%dセンチメートルです\n", inumber );

	dnumber = inumber;

	printf("1フィートは約%fセンチメートルです\n", dnumber );

	return 0;
}


