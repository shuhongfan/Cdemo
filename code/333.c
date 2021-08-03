//
// Created by shuhongfan on 2021/4/26 0026.
//

#include "stdio.h"
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}