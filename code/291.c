//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    long i,sum=1;
    for(i=1;i<=10;i++){
        sum*=i;
    }
    printf("%d",sum);
}