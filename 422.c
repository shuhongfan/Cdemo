//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>

int main(){
    int a=3,b=4,c=5,d=0,x,y;
    printf("%d\n",a+b>c&&b==c);
    printf("%d,%d\n",a||b+c&&(d=b-c),d);
    printf("%d\n",!(a>b)&&!c||1);
    printf("%d\n",!(x=a)&&(y=b)&&0);
    printf("%d\n",!(a+b)+c-1&&b+c/2);
}