#include <stdio.h>

int main(){
    char str1[80],str2[80];
    char ch;
    int i;
    puts("请输入原文：");
    gets(str1);
    i=0;
    while(str1[i]!='\0'){
        ch=str1[i];
        if(ch>='c'&&ch<='z'||ch>='C'&&ch<='Z'){
            ch=ch-2;
        } else if(ch>='a'&&ch<='b'||ch>='A'&&ch<='B'){
            ch=ch+24;
        }
        str2[i]=ch;
        i++;
    }
    str2[i]='\0';
    puts("密码为:");
    printf("%s",str2);
}