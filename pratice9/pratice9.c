/*
 * pratice9.c
 *
 *  Created on: 2019/12/23
 *      Author: SM11
 */
#include<stdio.h>

/*
int main(void){
	int number;
	int div;
	int temp;
	int i;
	for(i = 4000; i <= 5000; i++){
		temp = 1;
		if(i % 17 == 0){
			printf("%d = ", i);
			number = i;
			for(div = 2; div <= i/2; div++){
				while(number%div == 0){
					temp = div* temp;
					number = number/div;
					printf("%d", div);
					if(temp != i){
						printf("*");
					}
				}
			}
			printf("\n");
		}
	}

	return 0;
}
*/


int main(void){
	int number;
	int div;
	int count;
	int i;
	for(i = 4000; i <= 5000; i++){
		if(i%17 == 0){
			printf("%d = ", i);
			number = i;
			for(div = 2; div <= i/2; div++){
				count = 0;
				if(number % div == 0){
					printf("%d", div);
					while(number % div == 0){
						count++;
						number = number / div;
					}
					if(count != 1){
						printf("^%d", count);
					}
					if(number != 1) {
						printf(" * ");
					}
				}

			}
			printf("\n");
		}
	}

	return 0;
}

