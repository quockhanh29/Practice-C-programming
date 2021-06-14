/*
 * Sample10_07.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>
#include <string.h>

int main(void){

    char str1[10] = {"program"};
    char str2[10];
    char str3[10];
    char *str4;
    char *str5;
    int i;

    printf("str1は\"%s\"です。\n", str1);

    printf("str1に\"Clanguage\"をコピー。\n");
    strcpy(str1, "Clanguage");
    printf("str1は\"%s\"です。\n", str1);

    printf("str2にstr1の要素をコピー。\n");
    for(i = 0; ; i++){
        str2[i] = str1[i];
        if(str1[i] == '\0'){
            break;
        }
    }
    printf("str2は\"%s\"です。\n", str2);

    printf("str3にstr1をコピー。\n");
    strcpy(str3, str1);
    printf("str3は\"%s\"です。\n", str3);

    printf("str4にstr1のアドレスを代入。\n");
    str4 = str1;

    /*
    宣言時に要素を確保していないstr5に
    値をコピーすると確保していないメモリに
    データを書き込もうとしてプログラムは
    OSに停止されてしまうか、暴走します
    strcpy(str5, str1);
	*/

    printf("str4は\"%s\"です。\n", str4);

    str1[0] = 'B';

    printf("str1の1文字目をBに変更。\n");
    printf("str1は\"%s\"です。\n", str1);
    printf("str2は\"%s\"です。\n", str2);
    printf("str3は\"%s\"です。\n", str3);
    printf("str4は\"%s\"です。\n", str4);

    return 0;
}

