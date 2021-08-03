//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i;
    float sn=0,a=2,b=1,t;
    for(i=1;i<=20;i++){
        sn+=a/b;
        t=a;
        a=a+b;
        b=t;
    }
    printf("sum=%f\n",sn);
}