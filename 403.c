//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float s,area;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%f",area);
}