//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    double s=0,t=1;
    int i;
    for(i=1;i<=20;i++){
        t=t*i;
        s=s+t;
    }
    printf("%f",s);
}