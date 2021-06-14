/*
 * Sample08_03.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

int fib(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fib(n-2) + fib(n-1);
    }
}

int main(void){

    int integer1;
    int integer2;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("フィボナッチ数を求める数字を入力:\n");
    scanf("%d", &integer1);

    integer2 = fib(integer1);

    printf("%d 番目のフィボナッチ数は %d です。\n", integer1, integer2);

    return 0;
}

