//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int f[20]={1,1},i;
    for(i=2;i<20;i++){
        f[i]=f[i-1]+f[i-2];
    }
    for(i=0;i<20;i++)
        printf("%d\n",f[i]);
}