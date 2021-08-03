//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swap2(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=10;
    int b=20;

//    值传递
//    swap(a,b);
    swap2(&a,&b);

    printf("%d\n",a);
    printf("%d\n",b);
}