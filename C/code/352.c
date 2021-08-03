//
// Created by shuhongfan on 2021/4/27 0027.
//

#include "stdio.h"
void main(){
    int num=0x01020304;

    int *p1=&num;
    printf("*p1=%#x\n",*p1);

    short *p2=&num;
    printf("*p2=%#x\n",*p2);

    char *p3=&num;
    printf("*p3=%#x\n",*p3);

    short *p4=&num;
    p4=p4+1;
    printf("*p4=%#x\n",*p4);
}