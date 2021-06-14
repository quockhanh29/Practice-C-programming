/*
 * Sample13_05.c
 *
 *  Created on: 2019/11/28
 *      Author: win
 */
#include <stdio.h>
#include <time.h>

int main(void){

    time_t t;
    struct tm *local;

    t = time(NULL);

    local = localtime(&t);

    printf("今の時刻は %d年%d月%d日 %d時%d分%d秒です。\n",
        local->tm_year + 1900, local->tm_mon + 1, local->tm_mday,
        local->tm_hour, local->tm_min, local->tm_sec);

    return 0;
}

