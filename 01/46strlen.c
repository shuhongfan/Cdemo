//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>
#include <string.h>

int main(){
    char ch[]="hello world";
    printf("数组大小：%d\n",sizeof(ch));
    printf("字符串长度：%d\n",strlen(ch));

    char ch2[]="hello world";
    int len=0;
    while (ch2[len]!='\0') len++;
    printf("字符串长度：%d",len);
}