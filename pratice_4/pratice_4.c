/*
 * pratice_4.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	char c;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("beforeCharの値は:\n");
	scanf("%c", &c);
	getchar();

	if( c >64 && c < 91){
		printf("%c", c + 32);
	}
	else if(c > 96 && c < 123){
		printf("%c", c - 32);
	}
	else {
		printf("%c", c);
	}

	return 0;
}

