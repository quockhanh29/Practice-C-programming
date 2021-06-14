/*
 * add.c
 *
 *  Created on: 2019/11/26
 *      Author: SM12
 */
int sum = 0;


static void add_internal(int a){
    sum += a;
}

void add(int a){
    add_internal(a);
}

