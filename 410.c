//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>

int main(){
    float x=12.34547,y;
    y=((int)(x*1000+0.5))/1000.0;
    printf("%f",y);
}