/*
 * Sample07_11.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

	char str1[100];
	char str2[100];
	int i,j;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("str1を入力してください\n");
	scanf("%s", str1);

	for(i = 0; str1[i]; i++){
	}
	for(j = i - 1; j >= 0;  j--){
	       str2[i-j-1]=str1[j];
	 }

	printf("文字列str2の出力:%s\n", str2);

	return 0;
}

