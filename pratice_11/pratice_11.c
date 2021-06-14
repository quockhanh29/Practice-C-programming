/*
 * pratice_11.c
 *
 *  Created on: 2019/12/26
 *      Author: SM12
 */
#include<stdio.h>
#include<math.h>

int main(void){
	int binVal = 11001010;
	int decVal;
	int temp;
	int i;
	int bin;

	temp = binVal;
	i = 0;
	decVal = 0;

	while(temp > 0){
		bin = temp % 10;
		decVal += bin*pow(2,i);
		i++;
		temp = temp / 10;
	}

	printf("%dは 10進数に 変換する と %d です.", binVal, decVal);

	return 0;
}

