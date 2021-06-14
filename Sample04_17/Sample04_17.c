/*
 * Sample04_17.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	double dJap, dEng, dMat, dSci, dSoc;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("国語の点数を入力してください\n");
	scanf("%lf", &dJap);
	getchar();

	printf("英語の点数を入力してください\n");
	scanf("%lf", &dEng);
	getchar();

	printf("数学の点数を入力してください\n");
	scanf("%lf", &dMat);
	getchar();

	printf("理科の点数を入力してください\n");
	scanf("%lf", &dSci);
	getchar();

	printf("社会の点数を入力してください\n");
	scanf("%lf", &dSoc);
	getchar();

	printf("国語、数学、英語の3科目合計点は: %.2f\n", dJap+dEng+dMat);
	printf("国語, 数学、英語の3科目平均点は: %.2f\n",(dJap+dEng+dMat)/3);

	printf("国語、数学、英語, 理科,社会の5科目合計点は: %.2f\n", dJap+dEng+dMat+dSci+dSoc);
	printf("国語、数学、英語, 理科,社会の5科目平均点は: %.2f\n",(dJap+dEng+dMat+dSci+dSoc)/5);

	return 0;
}

