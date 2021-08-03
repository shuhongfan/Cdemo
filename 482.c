//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>

int main(){
    int i,j,k;
    float stu[10][3],avg[10],t,sum=0;
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            scanf("%f",&stu[i][j]);
        }
    }
    for(i=0;i<10;i++){
        sum=0;
        for(j=0;j<3;j++)
            sum+=stu[i][j];
        avg[i]=sum/3.0;
    }
    for(i=0;i<9;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if(avg[j]>avg[k]) k=j;
        }
        if(k!=i){t=avg[i];avg[i]=avg[k];avg[k]=t;}
    }
    for(i=0;i<10;i++)
        printf("%.2f ",avg[i]);
}