//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int a,b,t,r,n;
    scanf("%d,%d",&a,&b);
    if(a<b) {t=a;a=b;b=t;}
    r=a%b;
    n=a*b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    printf("最大公约数：%d,最小公倍数：%d",b,n/b);
}