//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int nums[]={9,8,7,6,5,4,3,2,1,21},i,j;
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            if(nums[i]<nums[j]){
                int t;
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
    for(i=0;i<10;i++)
        printf("%d\t",nums[i]);
}