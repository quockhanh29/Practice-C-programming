/*
 * Sample07_06.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include <stdio.h>
#define SUBJECT 3
#define NUM 5

int main(void){

    int test[SUBJECT][NUM];
    int i;
    int j;
    int sum, sumE, sumM, sumJ;
    int sump[NUM];

    test[0][0] = 64;
    test[0][1] = 72;
    test[0][2] = 48;
    test[0][3] = 58;
    test[0][4] = 79;
    test[1][0] = 60;
    test[1][1] = 55;
    test[1][2] = 58;
    test[1][3] = 63;
    test[1][4] = 83;
    test[2][0] = 73;
    test[2][1] = 70;
    test[2][2] = 83;
    test[2][3] = 60;
    test[2][4] = 62;

    for(i = 0; i < NUM; i++){
        printf("受験番号%dの人の成績\n", i + 1);
        sum = 0;
        for(j = 0; j < SUBJECT; j++){
            if(j == 0){
                printf("英語:%d点\t", test[j][i]);
            }
            else if(j == 1){
                printf("数学:%d点\t", test[j][i]);
            }
            else{
                printf("国語:%d点\t", test[j][i]);
            }
            sum += test[j][i];
        }
        sump[i] = sum;
        printf("合計:%d点\n\n", sum);
    }
	printf("各科目の平均点\n");
    for( i = 0; i < SUBJECT; i++ ){
    	for(j = 0; j < NUM; j++){
    		if(i == 0){
    			sumE += test[i][j];
    		}
    		else if(i == 1){
    			sumM +=test[i][j];
    		}
    		else {
    			sumJ +=test[i][j];
    		}
    	}
    }
    printf("英語:%d点\t", sumE / NUM);
    printf("数学:%d点\t", sumM / NUM);
    printf("国語:%d点\t", sumJ / NUM );
    printf("合計:%d点\n\n", (sump[0] + sump[1] + sump[2] + sump[3]+ sump[4]) / NUM);

    return 0;
}

