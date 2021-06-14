/*
 * Sample12_01.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include<stdio.h>

int main(int argc, char *argv[]){

	FILE *f;
	char *p;
	char str[100][100];
	int i,j;

	if(argc != 2){
		printf("ファイル名を一つだけ指定してください\n");
		return 1;
	}

	f = fopen(argv[1], "r");

	if(f == NULL){
		printf("ファイルをオーブン出来ません!\n");
		return 1;
	}
	else{
		printf("ファイルをオーブンしました！\n");
	}
	for(i = 0; i < 100; i++){
		p = fgets(str[i], 100, f);
		if(p == NULL){
			break;
		}
	}

    printf("ファイルを読み込みました！\n");
    printf("ファイルの内容を表示します！\n");

    for(j = 0; j < i; j++){
    	printf("%s", str[j]);
    }

	fclose(f);
	printf("ファイルをクロスしました！\n");


	return 0;
}

