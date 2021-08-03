//
// Created by shuhongfan on 2021/6/18.
//

#include "stdio.h"

int fb(int n){
    if(n==1||n==2) return 1;
    else return fb(n-1)+ fb(n-2);
}

int main(){
    int n;
    printf("%d", fb(40));
}