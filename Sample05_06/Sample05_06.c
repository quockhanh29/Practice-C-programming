/*
 * Sample05_06.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int weather;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("現在の天気を数値で入力してください\n晴れ：1、曇り：2、雨：3\n");
	scanf("%d", &weather);

	switch(weather){
	case 1:
		printf("今日はハイキングに行きましょう。\n");
		printf("コンビニでお弁当を買いましょう。\n");
		break;
	case 2:
		printf("今日は映画鑑賞に行きましょう.\n");
		printf("お昼ごはんはマクドナルド.\n");
		break;
	case 3:
		printf("ツタヤでdvdを借りてきましょう。\n");
		printf("お昼ご飯は近所の満腹食堂。\n");
		break;
	default:
		printf("1か２か３を入力してください\n");
		break;
	}
	printf("出かけるときには、戸締りを！\n");

	return 0;

}

