/*
 * Sample05_05.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	const int border = 80;
	int cloud;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("現在の雲量を入力してください。(0～100). \n");
	scanf("%d", &cloud);

	if( cloud <= border){
		printf("今日はハイキングに行きましょう。\n");
		printf("コンビニでお弁当を買いましょう。\n");
	}
	else if(cloud < 100){
		printf("今日は映画鑑賞に行きましょう.\n");
		printf("お昼ごはんはマクドナルド.\n");
		}
		else{
			printf("ツタヤでdvdを借りてきましょう。\n");
			printf("お昼ご飯は近所の満腹食堂。\n");
		}

	printf("出かけるときには、戸締りを！\n");

	return 0;
}

