//
// Created by shuhongfan on 2021/4/26 0026.
//
//1001 刘备 58,M 59
//1002 小乔 22,F 62
//1003 黄月英 28,F 42
//1004 大乔 26,F 88
//1005 貂蝉 24,F 33
#include "stdio.h"
typedef struct stu{
    int id;
    char name[21];
    int age;
    char sex;
    int score;
}student;

void BubbleSort(student* ss,int len){
    int i,j;
    student temp;
    for(i=0;i<len;i++){
        for(j=0;j<i;j++){
            if(ss[i].score>ss[j].score){
                temp=ss[i];
                ss[i]=ss[j];
                ss[j]=temp;
            }
        }
    }
}

void main(){
    int i;
    student ss[5];
    for(i=0;i<5;i++){
        scanf("%d%s%d,%c%d",&ss[i].id,ss[i].name,&ss[i].age,&ss[i].sex,&ss[i].score);
    }
    for(i=0;i<5;i++){
        printf("编号：%d\t",ss[i].id);
        printf("姓名：%s\t",ss[i].name);
        printf("性别：%s\t",ss[i].sex=="M"?"男":"女");
        printf("年龄：%d\t",ss[i].age);
        printf("成绩：%d\n",ss[i].score);
    }
    printf("\n");
    BubbleSort(ss,5);
    for(i=0;i<5;i++){
        printf("编号：%d\t",ss[i].id);
        printf("姓名：%s\t",ss[i].name);
        printf("性别：%s\t",ss[i].sex=="M"?"男":"女");
        printf("年龄：%d\t",ss[i].age);
        printf("成绩：%d\n",ss[i].score);
    }
}