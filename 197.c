#include <stdio.h>
#include "string.h"

int main(){
    void swap(char *s1,char *s2);
    char s1[20],s2[20],s3[20];
    gets(s1);
    gets(s2);
    gets(s3);
    if(strcmp(s1,s2)>0) swap(s1,s2);
    if(strcmp(s1,s3)>0) swap(s1,s3);
    if(strcmp(s2,s3)>0) swap(s2,s3);
    puts(s1);
    puts(s2);
    puts(s3);
    return 0;
}
void swap(char *s1,char *s2){
    char s[20];
    strcpy(s,s1);
    strcpy(s1,s2);
    strcpy(s2,s);
}