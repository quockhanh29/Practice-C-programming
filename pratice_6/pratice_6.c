/*
 * pratice_6.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int maxdiv;
	int x, y, temp, x1, y1;

	maxdiv = 1;

	setvbuf(stdout, NULL, _IONBF, 0);
	printf("割られる数は:");
	scanf("%d", &x);

	printf("割る数は:");
	scanf("%d", &y);

	x1 = x;
	y1 = y;

	do{
		temp = x % y;
		maxdiv = x/y;
		x = y;
		y = temp;
	}while(temp != 0);

	printf("%dと%d の最大公約数は%d", x1, y1, maxdiv);

	return 0;
}

