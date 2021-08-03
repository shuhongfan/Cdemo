//
// Created by shuhongfan on 2021/4/12.
//

#include "stdio.h"

void main(){
    int a[3]={3*0};
    int i;
    for(i=0;i<3;i++) scanf("%d",&a[i]);
    for(i=0;i<3;i++) a[0]=a[0]+a[1];
    printf("%d\n",a[0]);
}