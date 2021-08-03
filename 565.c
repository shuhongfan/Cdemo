//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i;
    double a=2,b=1,t,s=0;
    for(i=1;i<=20;i++){
        s=s+a/b;
        t=a;
        a=a+b;
        b=t;
    }
    printf("s=%f",s);
}