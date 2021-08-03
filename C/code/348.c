//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
union test{
    int a;
    short b;
    float c;
    double d;
    char e;
};
void main(){
    union test var;
    var.a=100;
    var.c=3.14;
    printf("%d\n",var.a);
    printf("%f\n",var.c);

}