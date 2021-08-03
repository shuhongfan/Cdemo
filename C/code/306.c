//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
#include "string.h"
void main(){
    int i,len,j;
    char str[30],str1[30],ch;
    printf("请输入字符串:");
    gets(str);
    len=strlen(str);
    printf("请输入删除的字符:");
    scanf("%c",&ch);
    for(j=0,i=0;i<len;i++){
        if(ch==str[i]) continue;
        str1[j++]=str[i];
    }
    puts(str1);
    for(i=0;i<str1[i]!='\0';i++)
        printf("%c",str1[i]);
}