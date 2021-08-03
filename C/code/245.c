//
// Created by shuhongfan on 2021/4/4.
//

#include "stdio.h"

void main(){
    int m=3,n=4,x;
    x=-m++;
    printf("%d\n",x);
    x=x+8/++n;
    printf("%d\n",x);

    char c1='b',c2='e';
    printf("%d,%c\n",c2-c1,c2-'a'+'A');

    int q=102,e=012;
    printf("%2d,%2d\n",q,e);

    int t=0256,u=256;
    printf("%o %o\n",t,u);
}