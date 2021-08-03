//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    char ch[10];
    gets(ch);
//    通过键盘获取一个字符串
//    通过正则表达式
    scanf("%[^\n]",ch);
    printf("%s\n",ch);
}