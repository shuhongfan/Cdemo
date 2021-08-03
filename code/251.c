//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int ch,ch1;
    printf("请输入一个小写字母:");
    scanf("%c",&ch);
    ch1=ch-32;
    printf("小写字母 %c 对于的大写字母为 %c",ch,ch1);
}