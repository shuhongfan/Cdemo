//
// Created by shuhongfan on 2021/4/14.
//

#include "stdio.h"
#include "string.h"
void main(){
    char a[7]="abcdef";
    char b[4]="ABC";
    strcpy(a,b);
//    printf("%c",a[8]);
    printf("%s",a);
}