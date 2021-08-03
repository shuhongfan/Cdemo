//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

point(char *p){
    p+=3;
    printf("%c\n",*p);
}

int main(){
    char b[4]={'a','b','c','d'},*p=b;
    point(p);
    printf("%c\n",*p);
}