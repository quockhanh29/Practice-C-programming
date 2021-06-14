/*
 * Sample08_05.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

int a = 0;

void increment(void){

    static int b = 0;
    int c = 0;

    printf("a:%d  b:%d  c:%d\n", a, b, c);

    a++;
    b++;
    c++;
}

int main(void){
    while(a < 5){
        increment();
    }

    return 0;
}

