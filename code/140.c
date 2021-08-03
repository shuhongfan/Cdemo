#include <stdio.h>
#include <string.h>

int main(){
    char str1[130],str2[20];
    printf("请输入第一个字符串：");
    gets(str1);
    printf("请输入第二个字符串:");
    gets(str2);
    strcat(str1,str2);
    printf("连接后的字符串为：");
    puts(str1);
    puts(str2);
}