/*
 * Sample13_08.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include<stdio.h>
#include<stdlib.h>

int main(void){

	int *score;
	int number;
	int sum = 0;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("受験者の人数を入力！\n");
	scanf("%d",&number);

	score = malloc( sizeof(int)*number);
	if(score == NULL){
		printf("メモリーの動的確保に失敗しました。\n");
		return 1;
	}
	else{
		printf("メモリーを動的に確保しました。\n");
	}
	for( i = 0; i < number; i++){
		printf("%d番目の受験者の点数を入力: ", i+ 1);
		scanf("%d",&score[i]);
	}
    for(i = 0; i < number; i++){
        sum += score[i];
    }
    printf("平均点は%fです。\n", (double)sum / number);

    free(score);
    printf("動的に確保したメモリを解放しました。\n");

    return 0;

}

