/*
 * pratice_3.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

	int i, j;

	for(i = 1; i< 10; i++){
		printf("\t%d", i);
	}
	printf("\n");
	for( i= 1; i< 10; i++){
		printf("%d\t", i);
		for ( j= 1; j< 10; j++){
			if((i*j) % 2 == 0){
				printf("**\t");
			}
			else if ((i*j)%3 == 0){
				printf("@@\t");
			}
			else if ((i*j)%6==0){
				printf("##\t");
			}
			else {
			printf("%d\t", i*j);
			}
		}
		printf("\n");
	}

	return 0;
}


