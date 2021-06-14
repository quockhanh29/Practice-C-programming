/*
 * Sample08_02.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

int involution(int a, int b){

    int involution = 1;
    int i;

    for(i = 0; i < b; i++){
        involution *= a;
    }

    return involution;
}

int main(void){

    int integer1;
    int integer2, integer3;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("累乗される整数を入力:");
    scanf("%d", &integer1);

    printf("何乗しますか？:");
    scanf("%d", &integer2);

    integer3 = involution(integer1, integer2);

    printf("%d の %d 乗は %d です。\n", integer1, integer2, integer3);

    return 0;
}

