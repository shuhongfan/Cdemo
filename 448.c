//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int i;
    float a=2,b=1,s=0,t;
    for(i=0;i<20;i++){
        s+=a/b;
        t=a;
        a=a+b;
        b=t;
    }
    printf("%f",s);
}