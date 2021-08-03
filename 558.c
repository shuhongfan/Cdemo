//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i;
    double s=0,t=1;
    for(i=1;i<=20;i++){
        t=t*i;
        s=s+t;
    }
    printf("%lf",s);
}