/*
 * Sample11_07.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include<stdio.h>

typedef enum Rank{A,B,C,D,E,X} Rank;

int main(void){

	char *message[X] = {
			"問題ありません、次の単元にお進みください。",
	        "間違った問題を見直して、次の単元に進みましょう",
	        "不得意分野を重点的に復習する必要があります。",
	        "もう一度最初から学習しなおす必要があります。",
	        "入力が不正です"
	};

	Rank rank;
	int score;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("あなたの得点を入力してください。:");
	scanf("%d", &score);

    if(score < 0 || 100 < score){rank = E;}
    else if(score < 30){rank = D;}
    else if(score < 60){rank = C;}
    else if(score < 80){rank = B;}
    else{rank = A;}

    printf("%s\n",message[rank]);

    return 0;
}

