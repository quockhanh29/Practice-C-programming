/*
 * Sample08_04.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

int a = 100;

void myPrint(void){

    int a = 200;

    printf("myPrintの変数aは%d\n", a);
}

int main(void){
    printf("グローバル変数aは%d\n", a);

    myPrint();

    {
        int a = 300;

        printf("ローカル変数aは%d\n", a);
    }

    return 0;
}

