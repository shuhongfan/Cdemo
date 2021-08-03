//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int s=0,t=1,n;
    for(n=1;n<=20;n++){
        t=t*n;
        s=s+t;
    }
    printf("%ld",s);
}