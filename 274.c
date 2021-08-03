//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>

int main(){
    struct student{
        int num;
        char name[20];
        float score;
    }student1,student2;
    scanf("%d%s%f",&student1.num,student1.name,&student1.score);
    scanf("%d%s%f",&student2.num,student2.name,&student2.score);
    printf("This higher score is:\n");
    if(student1.score>=student2.score){
        printf("%d %s %6.2f",student1.num,student1.name,student1.score);
    } else {
        printf("%d %s %6.2f",student2.num,student2.name,student2.score);
    }
}