//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int a=1,b=10;
    do{
        b=b-a;
        a++;
        printf("a=%d,b=%d\n",a,b);
    } while (b--<0);
    printf("a=%d,b=%d",a,b);
}