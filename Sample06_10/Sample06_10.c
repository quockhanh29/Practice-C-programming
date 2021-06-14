/*
 * Sample06_10.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int eng, mat, jap, i;
	int sumEg, sumM , sumJ;

	setvbuf(stdout, NULL, _IONBF, 0);

	sumEg= 0;
	sumM = 0;
	sumJ = 0;
	i = 1;

	do{
		printf("%d人目の成績\n", i);
		printf("英語:");
		scanf("%d", &eng);
		if(eng != -1){
			sumEg+= eng;
			printf("数学:");
			scanf("%d", &mat);
			sumM += mat;
			printf("国語:");
			scanf("%d", &jap);
			sumJ += jap;

			i++;
		}
	}
	while( eng != -1);

	printf("英語の平均点は%f点です\n",(double)sumEg/(i -1));
	printf("数学の平均点は%f点です\n", (double)sumM/(i -1));
	printf("国語のの平均点は%f点です\n", (double)sumJ/(i -1));

	return 0;
}

