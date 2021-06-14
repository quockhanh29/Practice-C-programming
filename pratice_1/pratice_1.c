/*
 * pratice_1.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int nenrei;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("年齢を入力してください\n");
	scanf("%d", &nenrei);

	if((nenrei >= 0) && (nenrei <= 19)) {
		printf("未成年です。\n地方自治体によっては医療費が20 0 のところも。\n");
	}
	else if ((nenrei >= 20) && (nenrei <= 59)){
		printf("成年です。\n飲酒・喫煙は控えめに。\n");
	}
	else if ((nenrei >= 60) && (nenrei <= 100)){
		printf("定年後も元気100%% で 過ごしてください。\n");
	}
	else {
		printf("入力した年齢は違う\n");
	}

	return 0;

}

