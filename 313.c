//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int i,b,k=0;
    for(i=1;i<=5;i++){
        b=i%2;
        while(b-->=0) k++;
    }
    printf("%d,%d\n",k,b);
}