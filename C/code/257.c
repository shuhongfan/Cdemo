//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    float grade;
    char price;
    printf("请输入百分制成绩：");
    scanf("%f",&grade);
    if (grade>100) printf("输入成绩有误！");
    else if (grade>=90) price='A';
    else if(grade>=80) price='B';
    else if(grade>=70) price='C';
    else if(grade>=60) price='D';
    else price='E';
    printf("这位学生的成绩为 %.2f,成绩等级为：%c",grade,price);
}