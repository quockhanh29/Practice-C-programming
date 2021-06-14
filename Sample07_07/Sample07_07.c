/*
 * Sample07_07.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){

    char str1[8];
    char str2[8] = {'P','r','o','g','r','a','m','\0'};
    char str3[] = {'P','r','o','g','r','a','m','\0'};
    char str4[8] = "Program";
    char str5[] = "Program";

    str1[0] = 'P';
    str1[1] = 'r';
    str1[2] = 'o';
    str1[3] = 'g';
    str1[4] = 'r';
    str1[5] = 'a';
    str1[6] = 'm';
    str1[7] = '\0';

    printf("文字列str1の出力:%s\n", str1);
    printf("文字列str2の出力:%s\n", str2);
    printf("文字列str3の出力:%s\n", str3);
    printf("文字列str4の出力:%s\n", str4);
    printf("文字列str5の出力:%s\n", str5);

    return 0;
}

