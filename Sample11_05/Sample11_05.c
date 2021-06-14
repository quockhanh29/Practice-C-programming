/*
 * Sample11_05.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

typedef struct student{
    int number;      /*出席番号*/
    char sex;        /*性別(M or F)*/
    double weight;   /*体重*/
    double height;   /*身長*/
    double bmi;      /*BMI*/
    double iweight;  /*理想体重*/
} Student;

void bmi(Student *s);

int main(void){

    Student student[3] = {{1, 'F', 48.5, 154.2}, {2, 'M', 73.2, 163.5}, {3, 'F', 43.5, 159.3}};
    int i;

    for(i = 0; i < 3; i++){
        printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%f、BMIは%f、理想体重は%fです。\n",
            student[i].number, student[i].sex, student[i].weight, student[i].height,
            student[i].bmi, student[i].iweight);

        bmi(&student[i]);

        printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%f、BMIは%f、理想体重は%fです。\n",
            student[i].number, student[i].sex, student[i].weight, student[i].height,
            student[i].bmi, student[i].iweight);
    }

    return 0;
}

void bmi(Student *s){

    s->bmi = (s->weight * 10000) / (s->height * s->height);

    s->iweight = (22 * s->height * s->height)/10000;
}

