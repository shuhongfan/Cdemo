//
// Created by shuhongfan on 2021/4/12.
//

#include "stdio.h"

void main(){
    int i,f[10];
    f[0]=f[1]=1;
    for(i=2;i<10;i++)
        f[i]=f[i-2]+f[i-1];
    for(i=0;i<10;i++){
        if(i%4==0) printf("\n");
        printf("%3d",f[i]);
    }
}