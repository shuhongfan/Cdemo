//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>
#include <string.h>

int main(){
    char ch[]="hello world";
    printf("�����С��%d\n",sizeof(ch));
    printf("�ַ������ȣ�%d\n",strlen(ch));

    char ch2[]="hello world";
    int len=0;
    while (ch2[len]!='\0') len++;
    printf("�ַ������ȣ�%d",len);
}