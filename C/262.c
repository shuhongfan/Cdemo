//
// Created by shuhongfan on 2021/6/1.
//

#include <stdio.h>

int main(){
    int a1,a2,b1,b2;
    int i=5,j=7,k=0;
    a1=!k;
    a2=i!=j;
    printf("a1=%d\ta2=%d\n",a1,a2);
    b1=k&&j;
    b2=k||j;
    printf("b1=%d\tb2=%d\n",b1,b2);
}