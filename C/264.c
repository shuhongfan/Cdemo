//
// Created by shuhongfan on 2021/6/1.
//

#include <stdio.h>

int main(){
    int a,b,c,d;
    a=c=0;
    b=1;
    d=20;
    if(a) d=d-10;
    else if(!b){
        if(!c) d=15;
        else d=25;
    }

    printf("%d\n",d);
}