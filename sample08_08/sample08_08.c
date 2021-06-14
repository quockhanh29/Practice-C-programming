/*
 * sample08_08.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>
#include "add.h"

int main(void){

    int i;

    for (i = 1; i <= 10; i++) {
        add(i);
    }

    printf("加算結果は %d です。\n", sum);

    return 0;
}

