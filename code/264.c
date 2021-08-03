//
// Created by shuhongfan on 2021/4/7.
//

#include "stdio.h"

void main(){
    int i,a[10]={0,1};
    for(i=0;i<=9;i++)
        a[i]=i;
    for(i=9;i>=0;i--)
        printf("%d ",a[i]);
}