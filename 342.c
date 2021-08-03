//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int i=0,j=0;
    char str[50],str2[50],n,*s=str,*s2=str2;
    gets(str);
    scanf("%c",&n);
    while(*s!='\0'){
        if(*s!=n){
           *s2=*s;
           s2++;
        }
        s++;
    }
    puts(str);
    puts(str2);
}