/*
 * involution.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include "involution.h"

int involution(int a, int b){

	int involution = 1;
	int i;

	for(i = 0; i< b; i++){
		involution *=a;
	}

	return involution;
}

