/*
 * Sample10_04.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include<stdio.h>

int main(void){

		char str1[8];  /*配列として文字列を宣言*/
	    char *str2;    /*ポインタとして文字列を宣言*/

	    setvbuf(stdout, NULL, _IONBF, 0);

	    printf("\"program\"と入力！\n");
	    scanf("%s", str1);

	    /* ポインタとして宣言された文字列は
	       キーボードからの入力には利用できない。
	    printf("\"program\"と入力！");
	    scanf("%s", str2);
	    */

	    /* 配列として宣言された文字列に
	       文字列を代入することは出来ない。
	       要素に一文字ずつ代入する。
	    printf("str1に文字列を代入します\n");
	    str1[8] = "program";
		*/

	    printf("str2に文字列を代入します\n");
	    str2 = "C_language";

	    printf("str1は\"%s\"\n", str1);
	    printf("str2は\"%s\"\n", str2);

	    printf("str2にstr1のアドレスを代入します\n");
	    str2 = str1;

	    printf("str1は\"%s\"\n", str1);
	    printf("str2は\"%s\"\n", str2);

	    printf("str1の一文字目を大文字に変更します\n");
	    str1[0] = 'P';

	    printf("str1は\"%s\"\n", str1);
	    printf("str2は\"%s\"\n", str2);

	    return 0;
}

