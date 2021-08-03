//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>

//函数声明
extern int add(int a,int b);
int add1(int a,int b);


int main(){
    add(33,66);
}
int add(int a,int b){
    printf("%d----%d",a,b);
}