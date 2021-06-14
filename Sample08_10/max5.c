/*
 * max5.c

 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
int max = 0;

int max5(int a, int b, int c, int d, int e){

	max = a;

	if(b>max){
		max = b;
	}
	if(c>max){
		max = c;
	}
	if(d>max){
		max = d;
	}
	if(e>max){
		max = e;
	}

	return max;
}

