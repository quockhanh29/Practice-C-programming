/*
 * Sample15_01.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

typedef struct bitField {
	unsigned char a : 8;
	unsigned char b : 2;;
} BitField;

int main(void){

	BitField bf;

	printf("BitField構造体のサイズ：%d\n", (int)sizeof(BitField));

	bf.a = 1;
	bf.b = 2;
	printf("メンバa : %d\n", bf.a);
	printf("メンバb : %d\n", bf.b);

	bf.a = 10;
	bf.b = 20;
	printf("メンバa : %d\n", bf.a);
	printf("メンバb : %d\n", bf.b);

	return 0;
}

