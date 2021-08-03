//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"

void main(){
    long fibonacci[40]={0},i;
    for(i=0;i<40;i++){
        if(i%5==0) printf("\n");
        if(i<2){
            fibonacci[i]=1;
        } else {
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
        printf("%ld\t",fibonacci[i]);
    }
}