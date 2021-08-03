//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
#define f(a,b,x) a*x+b
int main(){
    printf("%d,%d",f(3,2,1),f(6,5,f(3,2,1)));
}