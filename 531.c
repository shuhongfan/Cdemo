//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>

int main(){
    int i;
    for(i=1;i<=99;i++){
        if(i*i%10==i||i*i%100==i) printf("%d ",i);
    }
}