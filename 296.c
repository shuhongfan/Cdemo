//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
#include <string.h>
void f(char *s,char *t){
    char k;
    k=*s;
    *s=*t;
    *t=k;
    s++;
    t--;
    if(*s) f(s,t);
}

int main(){
    char str[10]="abcdefg",*p;
    p=str+ strlen(str)/2+1;
    printf("%s\n",*p);
    f(p,p-2);
    printf("%s\n",str);
}