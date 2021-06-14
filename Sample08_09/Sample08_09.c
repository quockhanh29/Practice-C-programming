/*
 * Sample08_09.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>
#include "add.h"

void add_internal(int a);

int main(void){

    int i;

    for (i = 1; i <= 10; i++) {
        add_internal(i);
    }

    printf("加算結果は %d です。\n", sum);

    return 0;
}

