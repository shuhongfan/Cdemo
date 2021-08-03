#include <stdio.h>
#include <string.h>

int main(){
    char str1[20],str2[20];
    gets(str1);
    gets(str2);
    if(strcmp(str1,str2)==0) printf("两个字符串相同");
    else printf("两个字符串不同");
}