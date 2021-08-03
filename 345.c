//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int num[5]={8,6,5,4,1},i,j,t;
    for(i=0;i<5;i++) printf("%d ",num[i]);
    putchar('\n');
    for(i=0;i<5/2;i++){
        t=num[i];
        num[i]=num[5-i-1];
        num[5-i-1]=t;
    }
    for(i=0;i<5;i++) printf("%d ",num[i]);
}