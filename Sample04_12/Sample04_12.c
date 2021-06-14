
#include<stdio.h>

int main(void){

	int inumber;
	double dnumber = 30.48;

	printf("1フィートは約%fセンチメートルです\n", dnumber );

	inumber = dnumber;

	printf("1フィートは約%dセンチメートルです\n", inumber );

	return 0;
}

