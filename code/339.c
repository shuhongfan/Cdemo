//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void main(){
    char ch[]="hello world";
    char *p=&ch[4];
    int step;
    step=p-ch;
    printf("%d\n",step);

}