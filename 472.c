//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
int con(char s1[],char s2[],char s3[]){
    int i,j;
    for(i=0;s1[i]!='\0';i++) s3[i]=s1[i];
    for(j=0;s2[j]!='\0';j++) s3[i+j]=s2[j];
    s3[i+j]='\0';
}
int main(){
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    con(s1,s2,s3);
    puts(s3);
}