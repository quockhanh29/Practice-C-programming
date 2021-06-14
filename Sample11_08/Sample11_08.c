/*
 * Sample11_08.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include<stdio.h>

typedef struct score{
	int exNum; // 受験番号
	int eng;
	int mat;
	int jap;
	double ave;
}Score;

void sortave(int numberPp, Score *s);
void sortexNum(int numberPp, Score *s);

int main(void){

	int numberPp;
	int proset;
	int i;
	Score score[100];

	void(*pProcess[2]) (int numberPp, Score *s);
	pProcess[0] = sortave;
	pProcess[1] = sortexNum;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("受験者数を入力\n");
	scanf("%d", &numberPp);

	for(i = 0; i< numberPp; i++){
		score[i].exNum = i+1;
		printf("受験番号 %d の成績を入力\n", i+1);
		printf("英語：");
		scanf("%d", &score[i].eng);
		printf("数学：");
		scanf("%d", &score[i].mat);
		printf("国語：");
		scanf("%d", &score[i].jap);

		score[i].ave = ( score[i].eng + score[i].mat + score[i].jap ) / 3;
	}

	do{
		printf("何に着目してソートしますか?　0：平均点、1：受験番号、2：終了\n");
		scanf("%d", &proset);
		(*pProcess[proset])(numberPp, score);
		for(i = 0; i< numberPp; i++){
			printf("受験番号:%d\t英語：%d\t数学:%d\t国語：%d\t平均：%.2f\n",
					score[i].exNum, score[i].eng, score[i].mat, score[i].jap, score[i].ave);
		}

	}while(proset != 2);

	return 0;
}


void sortave(int numberPp, Score *s){

	int i, j;
	Score temp;

	for(i = 0; i < numberPp - 1; i++){
		for(j = i+1; j < numberPp; j++){
			if(s[i].ave < s[j].ave){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

void sortexNum(int numberPp, Score *s){

	int i, j;
	Score temp;

	for(i = 0; i < numberPp - 1; i++){
		for(j = i+1; j < numberPp; j++){
			if(s[i].exNum < s[j].exNum){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
