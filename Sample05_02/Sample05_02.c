/*
 * Sample05_02.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

	int i;
	double d = 0.0;

	for(i = 0; i < 10; i++){
		d+=1;
	}
	printf("d==1.0 の値は %d です。\n", d == 1.0);

	return 0;
}
