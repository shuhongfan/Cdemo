#include <stdio.h>
#include <string.h>

int main(){
    char str[80];
    printf("����һ���ַ���:\n");
    gets(str);
    printf("���ַ����ĳ���Ϊ��%d",strlen(str));
}