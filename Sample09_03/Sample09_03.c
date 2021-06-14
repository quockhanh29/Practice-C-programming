/*
 * Sample09_03.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

void maxmin5(int a, int b, int c, int d, int e, int *pmax, int *pmin);

int main(void){

    int integer[5];
    int max = 0;
    int min = 0;
    int i;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("5つの整数の最大値と最小値を表示します\n");
    for(i = 0; i < 5; i++){
        printf("%d番目の数を入力:", i + 1);
        scanf("%d", &integer[i]);
    }

    maxmin5(integer[0], integer[1], integer[2], integer[3], integer[4], &max, &min);

    printf("5つの整数の最大値は %d です。\n", max);
    printf("5つの整数の最小値は %d です。\n", min);

    return 0;
}

void maxmin5(int a, int b, int c, int d, int e, int *pmax, int *pmin){

    int integer[5] = {a, b, c, d, e};
    int i;

    *pmax = integer[0];
    *pmin = integer[0];
    for(i = 1; i <= 4; i++){
        if(*pmax < integer[i]){
            *pmax = integer[i];
        }
        if(*pmin > integer[i]){
            *pmin = integer[i];
        }
    }
}
