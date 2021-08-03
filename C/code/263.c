//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int m,n,a,b,t,c;
    printf("Input two integer number:\n");
    scanf("%d,%d",&a,&b);
    m=a;
    n=b;
    while (b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    printf("The largest common divisor:%d\n",a);
    printf("The least common multiple:%d\n",m*n/a);
}