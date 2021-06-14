/*
 * pratice_8.c
 *
 *  Created on: 2019/12/20
 *      Author: SM11
 */
#include <stdio.h>
#define setStart 10
#define setEnd 15

int main(void){
	int end, start;

	setvbuf(stdout, NULL, _IONBF, 0);
	printf("セール期間の開始日を入力してください\n");
	scanf("%d", &start);
	printf("セール期間の終了日を入力してください\n");
	scanf("%d", &end);
	if(end<1 || end > 31 || start < 1 || start > 31 || start >= end){
		printf("入力する日を違う\n");
	} else if ( start < setEnd && end > setStart) {
		printf("セール期間と工事期間が重複しています\n");
	} else {
		printf("問題なくセールを開催できます\n");
	}

	return 0;
}

