#include <stdio.h>

int main(){
    char str1[80],str2[80];
    char ch;
    int i;
    puts("������ԭ�ģ�");
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
    puts("����Ϊ:");
    printf("%s",str2);
}