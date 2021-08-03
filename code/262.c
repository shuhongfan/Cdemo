//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int k=5,n=0;
    while (k>0){
        switch(k){
            default:break;
            case 1:n+=k;
            case 2:
            case 3:n+=k;
        }
        k--;
    }
    printf("%d\n",n);
}