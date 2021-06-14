/*
 * Sample03_05.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>

/*
 * キーボードから値を入力
 */
int main(void){

	int number1;
	double number2;
	char char1;
	char char2;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("整数を入力してください\n");
	scanf("%d", &number1);
	printf("%dが入力されました\n", number1);
	getchar();

	printf("実数を入力してください\n");
	scanf("%lf", &number2);
	printf("%fが入力されました\n", number2);
	getchar();

	printf("アルファベット(半角)を1文字入力してください\n");
	scanf("%c", &char1);
	printf("%cが入力されました\n", char1);
	getchar();

	printf("アルファベット(半角)を1文字入力してください\n");
	char2 = getchar();
	printf("%cが入力されました\n", char2);
	getchar();

	return 0;

}
