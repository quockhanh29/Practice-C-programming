/*
 * Sample07_05.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>
#define NUM 5

int main(void){

    int eng[NUM];
    int temp = 0;
    int i, j, k, l;

    setvbuf(stdout, NULL, _IONBF, 0);

    for(i = 0; i < NUM; i++){
        printf("%d番目の人の点数を入力！", i + 1);
        scanf("%d",&eng[i]);
    }

    for(j = 0; j < NUM - 1; j++){
        for(k = j + 1; k < NUM; k++){
            if(eng[j] < eng[k]){
                temp = eng[j];
                eng[j] = eng[k];
                eng[k] = temp;
            }
        }
    }

    for(l = 0; l < NUM; l++){
        printf("%d番目に大きい点数は%d点です。\n", l + 1, eng[l]);
    }

    return 0;
}

