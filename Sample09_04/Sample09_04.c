/*
 * Sample09_04.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include<stdio.h>
#include<math.h>

void deviation (int num, int sco[], double *pave, double *pdev, double dvalue[] );

int main(void){

	int sco[100];
	double dvalue[100];
	double ave, dev;
	int num, i;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("受験者数を入力\n");
	scanf("%d",  &num);

	for(i=0; i< num; i++){
		printf("%d人目の点数を入力:", i+1);
		scanf("%d", &sco[i]);
	}

	deviation( num, sco , &ave, &dev, dvalue);

	printf("平均点:%f\t", ave);
	printf("標準偏差:%f\n", dev);

	for(i =0; i< num; i++ ){
		printf("%d人目の点数:%d\t", i+1, sco[i]);
		printf("偏差値:%f\n", dvalue[i]);
	}

	return 0;
}


void deviation(int num, int sco[], double *pave, double *pdev, double dvalue[]){

	int j, sum, sumd;
	sum = 0;
	sumd =0;
	for(j = 0; j < num; j++){
		sum +=sco[j];
	}
	*pave = (double)sum / num;
	for(j = 0; j < num ; j++){
		sumd +=(sco[j]- (*pave)) * (sco[j]- (*pave));
	}
	*pdev = sqrt(sumd/num);

	for(j=0; j< num; j++){
		dvalue[j] = 50.0 + ((sco[j] - (*pave)) / (*pdev)) * 10;
	}
}
