#include <stdio.h>
#include <string.h>

int main(){
    char str1[80],str2[80];
    printf("请输入第一个字符串:");
    gets(str1);
    printf("请输入第二个字符串：");
    gets(str2);
    if(strcmp(str1,str2)==0) printf("两个字符串内容相同");
    else printf("两个字符串内容不同");
}