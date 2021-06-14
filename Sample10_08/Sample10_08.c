/*
 * Sample10_08.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#include <string.h>

int main(void){

    char str1[10];
    char str2[10];
    char str3[20];

    strcpy(str1, "Program");
    strcpy(str2, "Clanguage");

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("str1は\"%s\"です。\n", str1);
    printf("str2は\"%s\"です。\n", str2);
    printf("str3は\"%s\"です。\n", str3);

    return 0;
}

