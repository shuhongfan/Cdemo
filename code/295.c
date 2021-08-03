//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int i,sum=0;
    for(i=2;i<101;i=i+2)
        sum=sum+i;
    printf("%d",sum);
}