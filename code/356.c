//
// Created by shuhongfan on 2021/4/28 0028.
//

#include "stdio.h"
#include "string.h"
void main(){
    char a[40]="My name is LI jilin.",b[40]="Mr.Zhang Haoling is very happy.",*p;
    p=&b[4];
    b[16]='\0';
    a[11]='\0';
    strcat(a,b);
    printf("%s",a);
}