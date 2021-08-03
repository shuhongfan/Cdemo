//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,j,k,temp,nums[10]={9,8,6,4,2,3,5,1,7,10};
    for(i=0;i<10-1;i++){
        k=i;
        for(j=i;j<10;j++){
            if(nums[j]<nums[k]) k=j;
        }
        if(k!=i){
            temp=nums[k];
            nums[k]=nums[i];
            nums[i]=temp;
        }
    }
    for(i=0;i<10;i++) printf("%d\t",nums[i]);
}