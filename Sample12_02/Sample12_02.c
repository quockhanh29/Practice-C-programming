/*
 * Sample12_02.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include<stdio.h>

typedef struct student {
	int number;
	char sex;
	double weight;
	double height;
} Student;

int main(void){

	FILE *f;
	//Student student[3] = {{1, 'F', 48.5, 154.2}, {2, 'M', 73.2, 163.5}, {3, 'F', 43.5, 159.3}};
	Student student[3];
	int i;

	f = fopen("test.bin", "rb");

	if(f== NULL){
		printf("ファイルをオープン出来ません！\n");
	}
	else {
		printf("ファイルをオープンしました！\n");
	}

    for(i = 0; i < 3; i++){
        fread(&student[i], sizeof(Student), 1, f);
    }

	printf("ファイルに書き込みました！\n");

    fclose(f);
    printf("ファイルをクローズしました！\n");

    for(i = 0; i < 3; i++){
        printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
            student[i].number, student[i].sex, student[i].weight, student[i].height);
    }

    return 0;
}

