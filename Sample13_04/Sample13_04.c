/*
 * Sample13_04.c
 *
 *  Created on: 2019/11/28
 *      Author: win8
 */
#include<stdio.h>
#include<math.h>

int main(void) {

	const double pi = 3.14159;
	double r = 30 * pi / 180;
	double x1 = 3.0;
	double y1 = -2.0;
	double x2 = 12.3;

    printf("sin(%f) = %f\n", r, sin(r));

    printf("pow(%f, %f) = %f\n", x1, y1, pow(x1, y1));

    printf("ceil(%f) = %f\n", x2, ceil(x2));
    printf("floor(%f) = %f\n", x2, floor(x2));

    printf("fabs(%f) = %f\n", y1, fabs(y1));

    return 0;
}

