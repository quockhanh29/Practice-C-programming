/*
 * Sample02_04.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>

/*
 * エスケープシーケンスを使う
 */
int main(void){
	printf("ダブルコーテーション : %c\n", '\"');
	printf("円マーク (バックスラッシュ) : %c\n", '\\');
	printf("タブの%c挿入\n", '\t');

	return 0;

}
