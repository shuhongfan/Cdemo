//
// Created by shuhongfan on 2021/4/25 0025.
//

#include "stdio.h"
void renums(int nums[3][3]){
    int i,j,str[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            str[i][j]=nums[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            nums[i][j]=str[j][i];
        }
    }
}
void main(){
    int i,j,nums[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }
    renums(nums);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }

}