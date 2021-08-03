//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>

int main(){
    int p[7]= {11,13,15,16,18,17,18},i=0,k=0;
    while( i<7 && p[++i]%2) {
        k += p[i];
        printf("%d\n",k);
    }
    printf("%d\n",k);
}