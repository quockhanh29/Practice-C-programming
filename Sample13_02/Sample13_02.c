/*
 * Sample13_02.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include <stdio.h>

int main(void){

	int i1 = 123;
	int i2 = 23456;
	double d1 = 123.45;
	double d2 = 2345.678;

    printf("表示幅指定なし\n");
    printf("%d\n", i1);
    printf("%d\n", i2);

    printf("表示幅指定あり\n");
    printf("%8d\n", i1);
    printf("%8d\n", i2);

    printf("表示幅未満の場合は先頭を0埋め\n");
    printf("%08x\n", i1);
    printf("%08x\n", i2);

    printf("精度指定なし\n");
    printf("%f\n", d1);
    printf("%f\n", d2);

    printf("精度指定あり\n");
    printf("%7.2f\n", d1);
    printf("%7.2f\n", d2);

    return 0;
}

