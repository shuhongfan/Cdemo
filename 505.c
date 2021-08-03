//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
int sc(int stu[10][3]){
    int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<3;j++)
            scanf("%d",&stu[i][j]);
}
int pr(int stu[10][3]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<3;j++)
            printf("%d\t",stu[i][j]);
        printf("\n");
    }
}
int av(int stu[10][3],int avg[10]){
    int i,j,sum;
    for(i=0;i<10;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i][j];
        }
        avg[i]=sum/3;
    }
    for(i=0;i<10;i++)
        printf("%d\t",avg[i]);
}
int main(){
    int stu[10][3],avg[10];
    sc(stu);
    pr(stu);
    av(stu,avg);
}