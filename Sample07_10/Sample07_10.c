/*
 * Sample07_10.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>
#define NUM 100

int main(void){

	int eng[NUM];
	int mat[NUM];
	int jap[NUM];
	int iNumpp, i, j;
	int sumE, sumM, sumJ, sum;

	sumE = sumM = sumJ = sum = 0;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("受験者数を入力！\n");
	scanf("%d", &iNumpp);

	printf("英語の点数を受験番号順に入力！\n");
	for(i = 0; i < iNumpp; i++){
		printf("受験番号%d\t", i+1);
		scanf("%d", &eng[i]);
	}
	printf("数学の点数を受験番号順に入力！\n");
	for(i = 0; i < iNumpp; i++){
		printf("受験番号%d\t", i+1);
		scanf("%d", &mat[i]);
	}
	printf("国語の点数を受験番号順に入力！\n");
	for(i = 0; i < iNumpp; i++){
		printf("受験番号%d\t", i+1);
		scanf("%d", &jap[i]);
	}
	for(j = 0; j < iNumpp; j++){
		printf("受験番号%dの人の成績\n", j+1);
		printf("英語:%d点\t", eng[j] );
		printf("数学:%d点\t", mat[j] );
		printf("国語:%d点\t", jap[j] );
		printf("平均:%d点\n", (eng[j]+mat[j]+jap[j]) / 3 );

		sumE +=eng[j];
		sumM +=mat[j];
		sumJ +=jap[j];
		sum += ((eng[j]+mat[j]+jap[j]) / 3);
	}
	printf("受験者の平均点\n");
	printf("英語:%d点\t", sumE/iNumpp );
	printf("数学:%d点\t", sumM/iNumpp );
	printf("国語:%d点\t", sumJ/iNumpp );
	printf("全体:%d点\n", sum/iNumpp );

	return 0;
}

