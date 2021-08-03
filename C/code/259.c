//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int x=0,y=5,z=3;
    while (z-->0&&++x<5) {y=y-1;
    printf("%d,%d,%d\n",x,y,z);}

    printf("%d,%d,%d\n",x,y,z);
}