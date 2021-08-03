//
// Created by shuhongfan on 2021/4/25 0025.
//

#include "stdio.h"
void avg(int std[5][4],int av[5]){
    int i,j,sum=0;
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<4;j++){
            sum=sum+std[i][j];
        }
        av[i]=sum/4;
    }
    printf("平均数：");
    for(i=0;i<5;i++){
        printf("%d\t",av[i]);
    }
}
void sor(int av[5]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(av[i]>av[j]){
                int temp;
                temp=av[i];
                av[i]=av[j];
                av[j]=temp;
            }
        }
    }
    printf("\n高到低：");
    for(i=0;i<5;i++){
        printf("%d\t",av[i]);
    }
}
void main(){
    int student[5][4],av[5],i,j;
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
            scanf("%d",&student[i][j]);
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d\t",student[i][j]);
        }
        printf("\n");
    }
    avg(student,av);
    sor(av);
}