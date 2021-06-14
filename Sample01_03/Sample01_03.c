/*
 * Sample01_03.c
 *
 *  Created on: 2019/11/20
 *      Author: SM12
 */
#include <stdio.h>

/*
 * 九九をすべて表示する
 */
int main(void){

	int i;

	int j;

	for(i = 1; i<=9; i++) {
		for(j=1; j<=9; j++){
			printf("%d*%d=%d\n", i, j, i*j);

		}
	}
	return 0;
}

