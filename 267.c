//
// Created by shuhongfan on 2021/6/2.
//

#include <stdio.h>

int main(){
    int x=10,y=9;
    int a,b,c;
    a=(--x==y++)?--x:++y;
    b=x++;
    c=y;
    printf("%d %d %d",a,b,c);
}