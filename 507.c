//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>

int main(){
    int k;
    float s;
    for(k=0,s=0;k<7;k++){
        s+=k/2;
        printf("%d,%f\n",k,s);
    }
    printf("%d,%f\n",k,s);
}