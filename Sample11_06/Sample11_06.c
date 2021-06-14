/*
 * Sample11_06.c
 *
 *  Created on: 2019/11/27
 *      Author: SM12
 */
#include <stdio.h>


typedef struct student{
    int number;            /*出席番号*/
    char sex;              /*性別(M or F)*/
    double weight;         /*体重*/
    double height;         /*身長*/
    struct student *next;  /*Student型へのポインタ*/
} Student;


int main(void){

    Student student[3] = {{1, 'F', 48.5, 154.2}, {2, 'M', 73.2, 163.5}, {3, 'F', 43.5, 159.3}};
    Student *s;

    student[0].next = &student[2];
    student[2].next = &student[1];
    student[1].next = NULL;

    for(s = &student[0]; s != NULL; s = s->next){
        printf("出席番号%dの生徒の性別は%c、体重は%f、身長は%fです。\n",
            s->number, s->sex, s->weight, s->height);
    }

    return 0;
}





