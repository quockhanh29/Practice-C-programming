/*
 * pratice_5.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	char a;

	setvbuf(stdout, NULL,_IONBF, 0);

	printf("bedorehexの値は:\n");
	scanf("%c", &a);
	getchar();


	if( a >= 49 && a <= 57){
		printf("%c", a);
	}
	else if( a > 96 && a < 103){
		printf("%d%c", 1, a- 49 );
	}
	else{
		printf("入力した値を違う");
	}

	return 0;
}

