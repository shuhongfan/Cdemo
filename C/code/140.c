#include <stdio.h>
#include <string.h>

int main(){
    char str1[130],str2[20];
    printf("�������һ���ַ�����");
    gets(str1);
    printf("������ڶ����ַ���:");
    gets(str2);
    strcat(str1,str2);
    printf("���Ӻ���ַ���Ϊ��");
    puts(str1);
    puts(str2);
}