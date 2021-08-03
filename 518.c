//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
int length(char *p){
    int n=0;
    while(*p++!='\0') n++;
    return n;
}
int main(){
    char p[100];
    gets(p);
    printf("%d", length(p));
}