//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
int gcd(int a,int b){
    int temp;
    while (b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    int a,b,max,min;
    printf("请输入两个整数:");
    scanf("%d,%d",&a,&b);
    if(a<b){int t=a;a=b;b=t;}
    max=gcd(a,b);
    printf("最大公约数为：%d\n",max);
    min=a*b/max;
    printf("最小公倍数：%d\n",min);
}