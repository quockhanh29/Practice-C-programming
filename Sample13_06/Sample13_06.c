/*
 * Sample13_06.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include <stdio.h>
#include <time.h>

int main(void){

    int i;
    clock_t c1;
    clock_t c2;

    c1 = clock();

    for (i = 0; i < 1000000000; i++) {
        /* 空ループ */
    }

    c2 = clock();

    printf("1000000000ループするのにかかった時間は%f秒です。\n",
        (double)(c2 - c1) / CLOCKS_PER_SEC);

    return 0;
}

