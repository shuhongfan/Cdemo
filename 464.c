//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    char s1[80],s2[40];
    int i=0,j=0;
    gets(s1);
    gets(s2);
    while(s1[i]!='\0') i++;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
    puts(s1);
}