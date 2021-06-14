/*
 * Sample05_10.c
 *
 *  Created on: 2019/11/22
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int iSun;
	int iCheckDay;
	int day;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("月の最初の日曜日の日付を入力してください\n");
	scanf("%d",&iSun );
	getchar();

	printf("曜日を調べたい日付を入力してください\n");
	scanf("%d",&iCheckDay );
	getchar();

	day = (iCheckDay - iSun)%7;

	switch (day){
	case 0:
		printf("今日は日曜日です。\n");
		break;
	case 1:
		printf("今日は月曜日です。\n");
		break;
	case 2:
		printf("今日は火曜日です。\n");
		break;
	case 3:
		printf("今日は水曜日です。\n");
		break;
	case 4:
		printf("今日は木曜日です。\n");
		break;
	case 5:
		printf("今日は金曜日です。\n");
		break;
	case 6:
		printf("今日は土曜日です。\n");
		break;
	case -6:
		printf("今日は月曜日です。\n");
		break;
	case -5:
		printf("今日は火曜日です。\n");
		break;
	case -4:
		printf("今日は水曜日です。\n");
		break;
	case -3:
		printf("今日は木曜日です。\n");
		break;
	case -2:
		printf("今日は金曜日です。\n");
		break;
	case -1:
		printf("今日は土曜日です。\n");
		break;
	default:
		printf("入力する日を違う\n");
		break;
	}
	return 0;
}
