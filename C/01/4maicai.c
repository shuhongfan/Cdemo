//
// Created by shuhongfan on 2020/10/25.
//
#include <stdio.h>

int main(){
//    常量 只读变量
    const int price=3;
//    price=5;
//    printf("%d",price);

    int weight;
    printf("请输入购买斤数：\n");
    scanf("%d",&weight);
    int sum=price * weight;
    printf("%d\n",sum);
}
