/*
 * Sample11_01.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	typedef struct student{
		int number;
		char sex;
		double weight;
		double height;
	} Student;

	Student student1;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("出席番号を入力:");
	scanf("%d", &student1.number);
	getchar();

	printf("性別を入力( M or F):");
	scanf("%c", &student1.sex);

	printf("体重を入力:");
	scanf("%lf", &student1.weight);

	printf("身長を入力:");
	scanf("%lf", &student1.height);

	printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n", student1.number, student1.sex, student1.weight, student1.height);

	return 0;

}



