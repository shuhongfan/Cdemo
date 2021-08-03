//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"

void main(){
    int i;
    float student[10],sum=0,av=0;
    for(i=0;i<10;i++){
        scanf("%f",&student[i]);
    }
    for(i=0;i<10;i++){
        printf("%.2f ",student[i]);
        sum=sum+student[i];
    }
    printf("\n");
    av=sum/10.0;
    printf("学生的平均成绩为：%.2f",av);
    printf("学生的总成绩为：%.2f",sum);
}