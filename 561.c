//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i;
    double s=0;
    for(i=1;i<=100;i++) s+=i;
    for(i=1;i<=50;i++) s+=i*i;
    for(i=1;i<=10;i++) s+=1.0/i;
    printf("%f",s);
}