/*
 * Sample03_01.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include<stdio.h>

/*
 * 値の代入と参照
 */

int main(void){

	int number = 123;
	char a = 'Z';

	printf("変数numberの値は%dです。\n", number);
	printf("変数aの値は%cです。\n", a);

	number = 234;
	a = 'Y';

	printf("変数ん０値を変更しました\n");
	printf("変数numberの値は%dです。\n", number);
	printf("変数aの値は%cです。\n", a);

	return 0;

}
