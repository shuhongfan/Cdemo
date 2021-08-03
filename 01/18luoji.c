//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int a=10;
    int b=20;
    int c=(a,b=320);
    printf("%d\n",c);

    float p=3.14;
    int w=2;
    float sum= (int)(p * w);
    printf("%f\n",sum);
}