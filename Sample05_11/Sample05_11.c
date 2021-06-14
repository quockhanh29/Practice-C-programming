/*
 * Sample05_11.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int iIntSco;
	int iFinSco;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("中間試験の点数を入力してください\n");
	scanf("%d",&iIntSco );
	getchar();

	printf("期末試験の点数を入力してください\n");
	scanf("%d",&iFinSco );
	getchar();

	if(iIntSco < 50 ){
		if(iFinSco<50){
		printf("その学期の成績は1.\n");
		}
		else if (iFinSco >= 50 && iFinSco <= 69) {
			printf("その学期の成績は2.\n");
		}
		else if (iFinSco > 69){
			printf("その学期の成績は4.\n");
		}
		else {
			printf("入力した期末試験の点数を違う.\n");
		}
	}
	else if(iIntSco>=50 && iIntSco<=69 ){
		if(iFinSco<50){
		printf("その学期の成績は2.\n");
		}
		else if (iFinSco >= 50 && iFinSco <= 69) {
			printf("その学期の成績は3.\n");
		}
		else if (iFinSco > 69){
			printf("その学期の成績は5.\n");
		}
		else {
			printf("入力した期末試験の点数を違う.\n");
		}
	}
	else if(iIntSco > 69){
		if(iFinSco<50){
		printf("その学期の成績は3.\n");
		}
		else if (iFinSco >= 50 && iFinSco <= 69) {
			printf("その学期の成績は4.\n");
		}
		else if (iFinSco > 69){
			printf("その学期の成績は5.\n");
		}
		else {
			printf("入力した期末試験の点数を違う.\n");
		}
	}
	else {
		printf("入力した中間試験の点数を違う.\n");
	}

	return 0;
}

