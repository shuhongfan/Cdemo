//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int a[5],i,t;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5/2;i++){
        t=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=t;
    }
    for(i=0;i<5;i++) printf("%d ",a[i]);
}