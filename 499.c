//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>

int main(){
    int a[][3]= {1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            a[i][j]=i*2+j;
            if(i==j)sum=sum+a[i][j];
        }
    printf("%d",sum);
}