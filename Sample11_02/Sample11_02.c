/*
 * Sample11_02.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>

int main(void){

    typedef struct student{
        int number;     /*出席番号*/
        char sex;       /*性別(M or F)*/
        double weight;  /*体重*/
        double height;  /*身長*/
    } Student;

    Student student1 = {1, 'F', 48.5, 154.2};
    Student student2 = {2, 'M', 73.5, 168.3};

    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student1.number, student1.sex, student1.weight, student1.height);
    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student2.number, student2.sex, student2.weight, student2.height);

    student2 = student1;

    printf("student2にstudent1を代入しました。\n");
    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student2.number, student2.sex, student2.weight, student2.height);

    student1.weight = 53.4;

    printf("student1の体重を変更しました。\n");
    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student1.number, student1.sex, student1.weight, student1.height);
    printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
        student2.number, student2.sex, student2.weight, student2.height);

    return 0;
}

