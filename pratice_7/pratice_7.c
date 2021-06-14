/*
 * pratice_7.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

	int check[9][4] = {{1,1,0,0},{1,1,0,1},{1,1,1,1},{0,0,0,0},{0,1,1,0},{0,1,0,0},{1,0,0,0},{0,1,1,0},{1,0,0,1}};
	int kq[4][1];

	int x,i,j, s;

	s = 0;
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("xを入力してください:");
	scanf("%d", &x);

	if(x % 2 == 0){
		kq[0][0] = 1;
	}
	else {
		kq[0][0] = 0;
	}

	if(x % 3 == 0){
		kq[0][1] = 1;
	}
	else {
		kq[0][1] = 0;
	}

	if(x % 5 == 0){
		kq[0][2] = 1;
	}
	else {
		kq[0][2] = 0;
	}

	if(x % 7 == 0){
		kq[0][3] = 1;
	}
	else {
		kq[0][3] = 0;
	}

	for(i = 0; i< 9; i++ ){
		for(j = 0; j< 4; j++){
			if(kq[0][j] == check[i][j]){
				s = 1;
			}
			else {
				s = 0;
				break;
			}
		}
		if ( s == 1){
			break;
		}
	}

	if(s == 1){
		printf("◎");
	}
	else {
		printf("x");
	}
return 0;
}

