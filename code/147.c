#include <stdio.h>
#include <string.h>

int main(){
    char s1[6]="Hello",s2[6]="Hello";
    if(s1==s2) printf("�����ַ������������ͬ");
    else printf("�����ַ���������ݲ�ͬ");

    if(strcmp(s1,s2)==0) printf("�����ַ������������ͬ");
    else printf("�����ַ���������ݲ�ͬ");
}