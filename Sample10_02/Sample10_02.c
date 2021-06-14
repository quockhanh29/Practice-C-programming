/*
 * Sample10_02.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

    int test[5] = {10, 20, 30, 40, 50};
    int i;

    for(i = 0; i < 5; i++){
        printf("test[%d]の値は%dです\n", i, test[i]);
        printf("test+%dの値は%pです\n", i, test+i);
        printf("*(test+%d)の値は%dです\n\n", i, *(test+i));
    }

    return 0;
}

