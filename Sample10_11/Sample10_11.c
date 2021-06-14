/*
 * Sample10_11.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

void greeting(int hour, char **ppJapanese, char **ppEnglish){

    static char *japanese[3] = {"おはようございます。", "こんにちは。", "こんばんは。"};
    static char *english[3] = {"Good morning.", "Good afternoon.", "Good evening."};

    if(hour < 12){
        *ppJapanese = japanese[0];
        *ppEnglish = english[0];
    }
    else if(hour >= 12 && hour < 18){
        *ppJapanese = japanese[1];
        *ppEnglish = english[1];
    }
    else {
        *ppJapanese = japanese[2];
        *ppEnglish = english[2];
    }
}

int main(void){

    int hour;
    char *japanese;
    char *english;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("現在の時間を入力してください。\n");
    scanf("%d", &hour);

    greeting(hour, &japanese, &english);
    printf("日本語：%s\n", japanese);
    printf("英語　：%s\n", english);

    return 0;
}

