#include <stdio.h>
#include <string.h>

int main(){
    char str1[20],str2[20],temp[20];
    printf("�����ַ���str1:");
    gets(str1);
    printf("�����ַ���str2:");
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("������str1������Ϊ��%s\n",str1);
    printf("str2������Ϊ��%s",str2);
}