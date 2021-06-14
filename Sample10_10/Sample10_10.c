/*
 * Sample10_10.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

int max(int number, int *numbers){

    int max;
    int i;

    max = numbers[0];
    for (i = 1; i < number; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
    return max;
}
int min(int number, int *numbers){

    int min;
    int i;

    min = numbers[0];
    for (i = 1; i < number; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }
    return min;
}
int ave(int number, int *numbers){

    int sum = 0;
    int i;

    for (i = 1; i < number; i++){
    	sum += numbers[i];
    }
    return sum/number;
}

int main(void){

    int (*pProcess[3])(int number, int *numbers);

    int nums[100];
    int process = 0;
    int number = 0;
    char processStr[3][7] = {"最大", "最小", "平均"};
    int proccessedNumber;
    int i;

    pProcess[0] = max;
    pProcess[1] = min;
    pProcess[2] = ave;

    setvbuf(stdout, NULL, _IONBF, 0);

    printf("処理を選択！最大値：0、最小値：1、平均値：2\n");
    scanf("%d", &process);
    if(process < 0 || process > 2){
        printf("処理を正しく入力してください\n");
        return 1;
    }

    printf("数値の数を入力！\n");
    scanf("%d", &number);

    for(i = 0; i < number; i++){
        printf("%d番目の数値：", i + 1);
        scanf("%d", &nums[i]);
    }

    proccessedNumber = (*pProcess[process])(number, nums);

    printf("\n%s値は %d です。\n", processStr[process], proccessedNumber);

    return 0;
}

