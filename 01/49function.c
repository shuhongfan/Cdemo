//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>

int add(int a,int b){
    int sum=a+b;
    return sum;
}

void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=10;
    int b=20;
    int c=add(a,b);
    printf("%d\n",c);

    printf("%d\n",a);
    printf("%d\n",b);
    swap(a,b);
    printf("%d\n",a);
    printf("%d\n",b);
}