//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int a,b;
    for(a=1,b=1;a<=100;a++){
        if(b>=20) break;
        printf("%d\t%d\n",a,b);
        if(b%3==1) {
            b=b+3;continue;
        }
        b=b-5;
    }
    printf("%d\n",a);
}