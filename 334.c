//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int fun(int n){
    if(n==1||n==0) return 1;
    else return n*fun(n-1);
}

int main(){
    printf("%d", fun(5));
}