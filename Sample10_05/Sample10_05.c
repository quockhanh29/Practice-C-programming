/*
 * Sample10_05.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

	char str[3][20] = {"yesterday", "today", "tomorrow"};
	int i;

	for(i = 0; i < 3; i++){
		printf("%d番目の文字列は%sです。\n", i + 1, str[i]);
	}
	return 0;
}

