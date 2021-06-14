/*
 * involution.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
int involution(int a, int b){

    int involution = 1;
    int i;

    for(i = 0; i < b; i++){
        involution *= a;
    }

    return involution;
}

