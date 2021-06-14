/*
 * Sample15_02.c
 *
 *  Created on: 2019/11/29
 *      Author: SM12
 */
#include <stdio.h>

typedef struct bit {
	unsigned char b0 : 1;
	unsigned char b1 : 1;
	unsigned char b2 : 1;
	unsigned char b3 : 1;
	unsigned char b4 : 1;
	unsigned char b5 : 1;
	unsigned char b6 : 1;
	unsigned char b7 : 1;
} Bit;

typedef union port {
	unsigned char byte;
	Bit bit;
} Port;

int main(void){
	Port p;

	p.bit.b0 = 1;
	p.bit.b1 = 0;
	p.bit.b2 = 1;
	p.bit.b3 = 0;
	p.bit.b4 = 1;
	p.bit.b5 = 0;
	p.bit.b6 = 0;
	p.bit.b7 = 1;
	printf("バイト単位での表示: 0x%02x\n", p.byte);

	p.byte = 0x12;
	printf("ビッド単位での表示:%d%d%d%d%d%d%d%d\n",
			p.bit.b7,p.bit.b6,p.bit.b5,p.bit.b4,p.bit.b3,p.bit.b2,p.bit.b1,p.bit.b0 );

	return 0;

}
