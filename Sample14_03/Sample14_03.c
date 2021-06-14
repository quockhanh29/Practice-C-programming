/*
 * Sample14_03.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>

#define FEATURE_A

int main(void){

#ifdef FEATURE_A
	printf("機能Aが有効になっています。\n");
#else
    printf("機能Aが無効になっています。\n");
#endif

	return 0;
}

