#include <stdio.h>
#include <string.h>
int main(){
    void swap(char *,char *);
    char str1[20],str2[31],str3[20];
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,str2)>0) swap(str1,str2);
    if(strcmp(str1,str3)>0) swap(str1,str3);
    if(strcmp(str2,str3)>0) swap(str2,str3);
    printf("%s\n%s\n%s\n",str1,str2,str3);
}
void swap(char *s1,char *s2){
    char str[100];
    strcpy(str,s1);
    strcpy(s1,s2);
    strcpy(s2,str);
}