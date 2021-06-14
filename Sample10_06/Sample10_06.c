/*
 * Sample10_06.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#include <string.h>

int main(void){

    char str[100];
    int i;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("英数字で文字列を入力！\n");
    scanf("%s", str);

    printf("文字列の長さは%dです。\n", strlen(str));

    for(i = 0; ; i++){
        if(str[i] == '\0'){
            break;
        }
    }
    printf("文字列の長さは%dです。\n", i);

    printf("格納可能な文字数は%dです\n", (int)(sizeof(str) / sizeof(char) - 1));

    return 0;
}

