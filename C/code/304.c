//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,j;
    float student[5][4]=
            {{78,82,93,74},
             {91,82,72,76},
             {100,90,85,72},
             {67,89,90,65},
             {77,88,99,45}},av[5],sum[5];
    for(i=0;i<5;i++)
        for(j=0;j<4;j++){
            sum[i]=sum[i]+student[i][j];
            j==3&&(av[i]=sum[i]/4.0);
        }
    for(i=0;i<5;i++){
        printf("第%d个学生的总成绩:%.2f\t",i+1,sum[i]);
        printf("第%d个学生的平均绩:%.2f\n",i+1,av[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            if(av[i]>av[j]){
                float t;
                t=av[i];
                av[i]=av[j];
                av[j]=t;
            }
    }
    for(i=0;i<5;i++){
        printf("学生的平均绩排序:%.2f\n",av[i]);
    }
}