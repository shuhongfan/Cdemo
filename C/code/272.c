//
// Created by shuhongfan on 2021/4/12.
//

#include "stdio.h"
#include "string.h"
void main(){
    char p1[]="abcdefgh";
    char *p=p1;
    printf("%d\n", p);
    p+=3;
    printf("%d\n", p);
    printf("%s\n", strcpy(p,"ABCD"));
    printf("%d\n", strlen(strcpy(p,"ABCD")));
}