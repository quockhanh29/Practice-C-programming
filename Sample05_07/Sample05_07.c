/*
 * Sample05_07.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int money;
	char weather;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("現在の天気を数値で入力してください\n晴れ：F、曇り：C、雨：R\n");
	scanf("%c", &weather);

	printf("現在の所持金額を入力してください\n");
	scanf("%d", &money);

	if(weather == 'R' || money < 2000){
		printf("今日は家でテレビを見ていましょう。\n");
		printf("買い置きのインスタントラーメンが昼食。\n");
	}
	else if(weather == 'F' && money >= 5000){
		printf("今日はハイキングに行きましょう。\n");
		printf("コンビニでお弁当を買いましょう。\n");
	}
	else if((weather == 'F' || weather == 'C') && money >= 3000){
		printf("今日は映画鑑賞に行きましょう.\n");
		printf("お昼ごはんはマクドナルド.\n");
	}
	else if((weather == 'F' || weather == 'C') && money >= 2000){
		printf("ツタヤでdvdを借りてきましょう。\n");
		printf("お昼ご飯は近所の満腹食堂。\n");
	}
	else {
		printf("天気はFかCかRで入力してください\n");
	}

	printf("出かけるときには、戸締りを！\n");

	return 0;
}

