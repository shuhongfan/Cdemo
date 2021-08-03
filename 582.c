//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
int main(){
    char s1[80],s2[80];
    int i;
    gets(s2);
    for(i=0;s2[i]!='\0';i++) s1[i]=s2[i];
    s1[i]='\0';
    puts(s1);
}