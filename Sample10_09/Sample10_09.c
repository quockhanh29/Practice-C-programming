/*
 * Sample10_09.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#include <string.h>

int main(void){

    char address1[100];
    char address2[100];

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("メールアドレスを入力してください\n");
    scanf("%s", address1);

    printf("メールアドレスを入力してください(確認用)\n");
    scanf("%s", address2);

    if(strcmp(address1, address2) == 0){
        printf("入力されたメールアドレスは\n\"%s\"です。\n", address1);
    }
    else{
        printf("入力されたメールアドレスが違います。\n");
    }
    return 0;
}

