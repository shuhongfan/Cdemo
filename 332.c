//
// Created by shuhongfan on 2021/6/7.
//
#include <stdio.h>
int main()
{ int i, k, a[10], p[3];
    k=5;
    for (i=0;i<10;i++) a[i]=i;
    for (i=0;i<3;i++) p[i]=a[i *(i+1)];
    for (i=0;i<3;i++) {
        k+=p[i]*2;
        printf("%d\n",k);
    }
    printf("%d\n",k);
}