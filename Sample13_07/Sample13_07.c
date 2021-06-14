/*
 * Sample13_07.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	int r;

	srand(time(NULL));

	r = (rand()%6 + 1);

	printf("さいころの出目は %d です。\n", r);

	return 0;
}

