#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    printf("输入一个字符串:\n");
    gets(str);
    printf("该字符串的长度为：%d",strlen(str));
}