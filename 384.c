//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i;
    float sum=0,a=2,b=1;
    for(i=0;i<20;i++){
        sum+=a/b;
        a=a+b;
        b=a-b;
    }
    printf("%f",sum);
}