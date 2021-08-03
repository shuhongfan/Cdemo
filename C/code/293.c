//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int nums[8],i,j;
    for(i=0;i<8;i++)
        scanf("%d",&nums[i]);
    for(i=0;i<8;i++)
        printf("%d ",nums[i]);
    printf("\n");

    for(i=0;i<8;i++)
        for(j=0;j<8;j++){
            if(nums[i]<nums[j]){
                int t;
                t=nums[j];
                nums[j]=nums[i];
                nums[i]=t;
            }
        }
    for(i=0;i<8;i++)
        printf("%d ",nums[i]);
}