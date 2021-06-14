/*
 * Sample13_03.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include <stdio.h>

int main(void){

    int data = 123;
    char str[100];

    printf("printfによる出力です：%d\n", data);

    sprintf( str, "sprintfによる出力です：%d\n", data);
    puts(str);

    printf("%s", str);

    return 0;
}

