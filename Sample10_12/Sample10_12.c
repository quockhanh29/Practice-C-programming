/*
 * Sample10_12.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#include <stdlib.h>

int icompare(const void *c1, const void *c2){
    if (*(int *)c1 < *(int *)c2){
        return -1;
    }
    else if (*(int *)c1 == *(int *)c2){
        return 0;
    }
    else{
        return 1;
    }
}

int dcompare(const void *c1, const void *c2){
    if (*(double *)c1 < *(double *)c2){
        return -1;
    }
    else if (*(double *)c1 == *(double *)c2){
        return 0;
    }
    else{
        return 1;
    }
}

int main(void){

    int inums[5] = {20, 10, 40, 30, 50};
    double dnums[5] = {23.2, 43.5, 10.7, 53.8, 35.5};
    int i;

    printf("並び替え前\n");
    for(i = 0; i < 5; i++){
        printf("%d\t", inums[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("%f\t", dnums[i]);
    }
    printf("\n");

    qsort(inums, 5, sizeof(inums[0]), icompare);
    qsort(dnums, 5, sizeof(dnums[0]), dcompare);

    printf("並び替え後\n");
    for(i = 0; i < 5; i++){
        printf("%d\t", inums[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("%f\t", dnums[i]);
    }
    printf("\n");

    return 0;
}

