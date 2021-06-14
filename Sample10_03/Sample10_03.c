/*
 * Sample10_03.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#define NUMBER 5

void sort(int *pnum, int number);

int main(void){

    int integer[NUMBER];
    int i;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("%d個の整数を入力して大きい順に表示します\n", NUMBER);
    for(i = 0; i < NUMBER; i++){
        printf("%d番目の数を入力:", i + 1);
        scanf("%d", &integer[i]);
    }

    sort(integer, NUMBER);

    for(i = 0; i < NUMBER; i++){
        printf("%d番目に大きい数は %d です。\n", i + 1, integer[i]);
    }

    return 0;
}

void sort(int *pnum, int number){

    int i, j;
    int temp;

    for(i = 0; i < number - 1; i++){
        for(j = i + 1; j < number; j++){
            if(pnum[i] < pnum[j]){
                temp = pnum[i];
                pnum[i] = pnum[j];
                pnum[j] = temp;
            }
        }
    }
}

