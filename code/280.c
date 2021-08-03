//
// Created by shuhongfan on 2021/4/14.
//

#include "stdio.h"

void main(){
    int i,j;
    char c[]="It's a computer";
    for(i=0;i<8;i++){
        j=i+7;
        printf("%c",c[j]);
    }
}