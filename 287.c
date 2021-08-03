//
// Created by shuhongfan on 2021/6/4.
//

#include <stdio.h>

int main(){
    int a=1,b=2,c=2,t;
    while(a<b<c) {
        t=a;
        a=b;
        b=t;
        c--;
        printf("%d %d %d\n",a,b,c);
    }
    printf("%d %d %d",a,b,c);
}