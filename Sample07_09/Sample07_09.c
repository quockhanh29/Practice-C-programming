/*
 * Sample07_09.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>

int main(void){

    char str[100];
    int i;
    int j;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("文字列を入力！\n");

    scanf("%s", str);

    for(i = 0; str[i]; i++){
    }

    printf("文字列を逆転して出力\n");

    for(j = i - 1; j >= 0; j--){
        printf("%c", str[j]);
    }

    printf("\n");

    return 0;
}

