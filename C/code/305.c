//
// Created by shuhongfan on 2021/4/24.
//

#include<stdio.h>
void main()
{
    int i,j;
    float sum,t,ave[5]={0};
    float s[5][4]={{78,82,93,74},
                   {91,82,72,76},
                   {100,90,85,72},
                   {67,89,90,65},
                   {77,88,99,45}};

    for (i=0;i<5;i++)//求平均成绩
    { sum=0;
        for (j=0;j<4;j++)
            sum=sum+s[i][j];
        ave[i]=sum/4;
    }
    for(j=0;j<4;j++)//对平均成绩排序
        for(i=0;i<4-j;i++)
            if (ave[i]>ave[i+1])
            {t=ave[i];
                ave[i]=ave[i+1];
                ave[i+1]=t;}
    printf("5个学生的平均成绩从高到低排序为:\n");
    for(i=0;i<5;i++)
        printf("%.2f\n",ave[i]);
}
