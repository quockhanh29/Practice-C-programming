/*
 * Sample06_04.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int first;
	int end;
	int i;
	int sum =0;
	int sump = 0;


	setvbuf(stdout, NULL, _IONBF, 0);

	printf("最初の数を入力!\n");
	scanf("%d",&first);

	printf("最後の数を入力!\n");
	scanf("%d",&end);

	if (first > end){
		printf("最初の数のほうが最後の数より大きいです。\n");
	}
	else {
		i = first;
		while( i<= end ){
			sump = sum;
			sum += i;
			printf(" %d + %d = %d\n", sump, i, sum);
			i++;
		}
		printf("%d から %d までの和は %d です。\n", first, end, sum);
	}
	return 0;
}

