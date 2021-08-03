//
// Created by shuhongfan on 2021/4/13.
//

#include "stdio.h"
void main(){
    int a[6],i;
    for(i=1;i<6;i++){
        a[i]=9*(i-2+4*(i>3))%5;
        printf("%2d",a[i]);
    }
}