//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int m,n,max,chushu;
    printf("请输入两个正整数：");
    scanf("%d,%d",&m,&n);
    if(m<n){
        int t;
        t=m;
        m=n;
        n=t;
    }
    max=m*n;
    chushu=m%n;
    while (chushu!=0){
        m=n;
        n=chushu;
        chushu=m%n;
    }
    printf("最大公约数是：\n%d\n",n);
    printf("最小公倍数是：\n%d\n",max/n);
}