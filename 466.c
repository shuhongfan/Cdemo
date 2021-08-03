//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#include <string.h>
int main(){
    char s1[80],s2[80];
    int i;
    gets(s2);
    for(i=0;i<=strlen(s2);i++){
        s1[i]=s2[i];
    }
    puts(s1);
}