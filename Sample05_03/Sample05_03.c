/*
 * Sample05_03.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	const int border = 80;
	int cloud;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("現在の雲量を入力してください。(0～100)\n");
	scanf("%d", &cloud);

	if( cloud <= border){
		printf("今日はハイキングに行きましょう。\n");
		printf("コンビニでお弁当を買いましょう。\n");
	}

	printf("出かけるときには、戸締りを！\n");

	return 0;
}

