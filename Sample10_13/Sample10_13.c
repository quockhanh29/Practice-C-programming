/*
 * Sample10_13.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include<stdio.h>
#include<stdlib.h>


int icompare(const void *c1, const void *c2){
    if (*(int *)c1 < *(int *)c2){
        return 1;
    }
    else if (*(int *)c1 == *(int *)c2){
        return 0;
    }
    else{
        return -1;
    }
}

void sort(int num, int inum[], int **ppDescNum){
	int newNum[100];
	int i;

	for(i = 0; i< num; i++){
		newNum[i] = inum[i];
	}

	qsort(newNum, num, sizeof(newNum[0]), icompare);

	*ppDescNum = newNum;
}

int main(void){

	int inums[100];
	int num;
	int *pDescNum;
	int i;

	setvbuf(stdout, NULL, _IONBF, 0);

	 printf("数値の数を入力！\n");
	 scanf("%d", &num);

	 for(i = 0; i < num ; i++){
	     printf("%d番目の数値：", i + 1);
	     scanf("%d", &inums[i]);
	  }

	 sort( num, inums, &pDescNum);

	 printf("降順後！\n");
	 for(i = 0; i < num ; i++){
	     printf("%d\t", *(pDescNum +i ));
	  }

	 return 0;

}

