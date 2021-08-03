//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int i=32768;
    do{
        if(i<0) break;
        printf("%d",i);
    }while(++i);
}