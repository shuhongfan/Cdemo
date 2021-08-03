//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    long i,j=1,sum=0;
    for(i=1;i<=10;i++){
        j=i*j;
        sum=sum+j;
    }
    printf("%ld",sum);
}