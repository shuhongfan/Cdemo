//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i;
    double t=1,s=0;
    for(i=1;i<=20;i++){
        t=t*i;
        s=s+t;
    }
    printf("sum=%.2lf",s);
}