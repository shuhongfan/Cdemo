#include <stdio.h>
#include <string.h>

int main(){
    char str1[80],str2[80];
    printf("�������һ���ַ���:");
    gets(str1);
    printf("������ڶ����ַ�����");
    gets(str2);
    if(strcmp(str1,str2)==0) printf("�����ַ���������ͬ");
    else printf("�����ַ������ݲ�ͬ");
}