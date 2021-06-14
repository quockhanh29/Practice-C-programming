/*
 * Sample13_10.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;
    int i;
    int in = 0;
    double x;
    double y;
    double pi;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("点を打つ数を入力！");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) {
            in++;
        }
    }

    pi = (double)in / num * 4;
    printf("円周率：%.15f\n", pi);

	return 0;
}

