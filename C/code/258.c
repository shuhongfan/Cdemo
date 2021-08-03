//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int i=0,s=0;
    do {
        if(i%2){i++;continue;}
        i++;
        s+=i;
        printf("%d ",s);
    } while (i<7);
    printf("%d",s);
}