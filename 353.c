//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,j,temp,nums[10]={9,8,6,4,2,3,5,1,7,10};
    for(i=0;i<10-1;i++){
        for(j=0;j<10-1-i;j++){
            if(nums[j]<nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++) printf("%d\t",nums[i]);
}