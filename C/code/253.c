//
// Created by shuhongfan on 2021/4/5.
//

#include "stdio.h"

void main(){
    int a=2,b=-1,c=2;
    if(a) c=2;
    else if(b<0) c=0;
    else c++;
    printf("%d\n",c);
}