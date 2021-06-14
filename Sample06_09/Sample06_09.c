/*
 * Sample06_09.c
 *
 *  Created on: 2019/11/25
 *      Author: sannomiya
 */
#include<stdio.h>

int main(void){

	int iM;
	int iD;
	int i, j, day;
	int allday;

	day = 1;
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("何月のカレンダーを作成しますか？\n");
	scanf("%d", &iM);

	printf("1日の曜日は？日曜 = 0･･･土曜 = 6で入力\n");
	scanf("%d", &iD);

	printf("この月に何日間か\n");
	scanf("%d", &allday);

	printf("%d月のカレンダー\n", iM);
	printf("日\t月\t火\t水\t木\t金\t土\n");

	for(i = 1; i <= (allday + iD); i++){
		if(iD!=0 && i == 1){
			for(j=0; j<iD; j++){
				printf("\t");
				i++;
			}
		}
		printf("%d", day);
		day++;
		if(i%7==0){
			printf("\n");
		}else{
			printf("\t");
		}
	}
	return 0;
}

