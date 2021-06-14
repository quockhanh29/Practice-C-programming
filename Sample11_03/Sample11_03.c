/*
 * Sample11_03.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

typedef struct student{
    int number;     /*出席番号*/
    char sex;       /*性別(M or F)*/
    double weight;  /*体重*/
    double height;  /*身長*/
} Student;

void bmi(Student s);

int main(void){

    Student student1 = {1, 'F', 48.5, 154.2};

    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student1.number, student1.sex, student1.weight, student1.height);

    bmi(student1);

    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student1.number, student1.sex, student1.weight, student1.height);

    return 0;
}

void bmi(Student s){

    double bmi;

    bmi = (s.weight * 10000) / (s.height * s.height);

    s.weight = (22 * s.height * s.height) / 10000;

    printf("生徒のBMIは%fです。\n", bmi);

    printf("出席番号%dの生徒の性別は%c、目標体重は%f、身長は%fです。\n",
        s.number, s.sex, s.weight, s.height);
}

