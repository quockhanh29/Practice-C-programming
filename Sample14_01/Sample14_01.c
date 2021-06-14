/*
 * Sample14_01.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>

#define NUM1 123
#define NUM2 ( 234 + 345 )

int main(void){

    printf("NUM1の値は %d です。\n", NUM1);
    printf("NUM1を2倍した値は %d です。\n", NUM1 * 2);

    printf("NUM2の値は %d です。\n", NUM2);
    printf("NUM2を2倍した値は %d です。\n", NUM2 * 2);

    return 0;
}

