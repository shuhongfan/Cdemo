#include <stdio.h>
#include <string.h>

int main(){
    char s1[6]="Hello",s2[6]="Hello";
    if(s1==s2) printf("两个字符数组的内容相同");
    else printf("两个字符数组的内容不同");

    if(strcmp(s1,s2)==0) printf("两个字符数组的内容相同");
    else printf("两个字符数组的内容不同");
}