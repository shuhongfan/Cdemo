//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    char a[]="123456789",*p;
    int i=0;
    p=a;
    while(*p){
        if(i%2!=0) *p='*';
        puts(a);
        p++;
        i++;
    }
    puts(a);
}