/*
 * Sample07_08.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){

    char str[10];

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("今日の昼食は？\n");

    scanf("%s", str);

    printf("今日の昼食は%sです。\n", str);

    return 0;
}

