//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    long nums[40],i;
    for(i=0;i<40;i++){
        if(i<2) nums[i]=1;
        else nums[i]=nums[i-1]+nums[i-2];
        i!=0&&i%5==0&& printf("\n");
        printf("%12ld\t",nums[i]);
    }
}