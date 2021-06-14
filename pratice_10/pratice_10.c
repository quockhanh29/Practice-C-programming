/*
 * pratice_10.c
 *
 *  Created on: 2019/12/23
 *      Author: SM11
 */
#include<stdio.h>
#include<math.h>

void disl(int data, int j);
int powk (int data, int j);
char cnumber[15][4]={"零","一","二", "三", "四", "五", "六", "七", "八", "九", "十","百", "千", "万","億"};

int main(void){
	unsigned long number;
	unsigned long  temp;
	int i, j;
	int dv;



	setvbuf(stdout, NULL, _IONBF, 0);
	printf("numberを入力してください (0から20億mまで)");
	scanf("%ld", &number);

	if(number < 0 || number > 2000000000){
		printf("入力するnumberを違う");
	}else {
		if(number == 0) {
			printf(cnumber[0]);
		}
		else
		{	if(number > 99999999){
				dv = number / 1000000000;
				disl(dv, 1);
				number = number - dv*1000000000;
				dv = number / 100000000;
				disl(dv, 0);
				number = number - dv*100000000;
				printf("億");
			}
			for(i=1 ; i > -1 ; i--){
				temp = number / (powk(10000,i));
				number = number % (powk(10000,i));
				if(temp != 0){
					for(j = 3; j > 0;j-- ){
						dv = temp / powk(10,j);
						temp = temp - dv*(powk(10,j));
						disl(dv, j);
					}
					dv = temp %10;
					disl(dv, 0);
					if(i == 1){
						printf("万");
					}
				}
			}
		}
	}
	return 0;
}

void disl(int data, int j){
	int j2 = j;
	if(data != 0){
		switch (j2){
			case 3: {
				if(data>1){
					printf(cnumber[data]);
				}
				printf("千"); break;}
			case 2: {
				if(data>1){
					printf(cnumber[data]);
				}
				printf("百");break;}
			case 1: {
				if(data>1){
					printf(cnumber[data]);
				}
				printf("十"); break;}
			case 0: {printf(cnumber[data]); break;}
		};
	}
}

int powk (int data, int j){
	int s;
	int k;
	s = 1;
	for(k = 0  ; k< j; k++){
		s = s * data;
	}
	return s;
}
