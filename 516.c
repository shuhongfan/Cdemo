//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
#include <string.h>
int swap(char *a,char *b){
    char t[100];
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
}
int main(){
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    gets(s3);
    if(strcmp(s1,s2)>0) swap(s1,s2);
    if(strcmp(s1,s3)>0) swap(s1,s3);
    if(strcmp(s2,s3)>0) swap(s2,s3);
    puts(s1);
    puts(s2);
    puts(s3);
}