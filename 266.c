//
// Created by shuhongfan on 2021/6/2.
//

#include <stdio.h>

int main(){
    int a=2,b=3,c;
    c=a;
    if(a>b) c=1;
    else if(a==b) c=0;
    else c=-1;
    printf("%d\n",c);
}
