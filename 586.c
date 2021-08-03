//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
#include <string.h>
int swap(char *s1,char *s2){
    char t[20];
    strcpy(t,s1);
    strcpy(s1,s2);
    strcpy(s2,t);
}
int main(){
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
}