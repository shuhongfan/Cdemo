//
// Created by shuhongfan on 2021/6/7.
//
#include <stdio.h>
int main()
{ int p[7]={11,13,14,15,16,17,18},i=0,k=0;
    while(i<7&&p[i]%2){
        k=k+p[i];i++;
        printf("%d\n",k);
    }
    printf("%d\n",k);
}