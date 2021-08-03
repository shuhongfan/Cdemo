//
// Created by shuhongfan on 2020/11/3.
//

#include <stdio.h>

int main11(){
    const int a=10;
    int* p=&a;
    *p=100;
}

int main(){
    char ch1[]="hello";
    char ch2[]="world";
    char* const p = ch1;
    p[3]="m";
    printf("%s\n",p);
}