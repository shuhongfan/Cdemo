#include <stdio.h>
#include <string.h>

int main(){
    char str1[20],str2[20],temp[20];
    printf("输入字符串str1:");
    gets(str1);
    printf("输入字符串str2:");
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("交换后str1的内容为：%s\n",str1);
    printf("str2的内容为：%s",str2);
}