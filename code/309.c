//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int nums[3][3]={{1,2,3},{1,1,1},{3,2,1}},i,j,sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            if(i==j){
                sum=sum+nums[i][j];
            }
            if(i+j==2){
                sum=sum+nums[i][j];
            }
        }
    printf("sum=%d",sum);
}