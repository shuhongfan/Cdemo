//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int i,j,m=0,k=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            k++;
            printf("k=%d,j=%d\n",k,j);
        }
        k=k-j;
    }
    m=i+j;
    printf("k=%d,m=%d",k,m);
}