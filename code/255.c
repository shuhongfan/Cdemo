//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    long num,ws;
    printf("请输入不多于5位的正整数：");
    scanf("%ld",&num);
    if(num/10000>=1) ws=5;
    else if(num/1000>=1) ws=4;
    else if(num/100>=1) ws=3;
    else if(num/10>=1) ws=2;
    else if(num>=1) ws=1;
    printf("%d 是一个 %d 位数字，每位数字为：",num,ws);
    switch (ws) {
        case 5:printf("%d ",num/10000);
        case 4:printf("%d ",num/1000%10);
        case 3:printf("%d ",num/100%10);
        case 2:printf("%d ",num/10%10);
        case 1:printf("%d ",num%10);
        default: printf("\n");
    }
}