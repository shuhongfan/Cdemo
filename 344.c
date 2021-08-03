//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int sum=0,arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j||(i==(2-i)&&i!=j))
                sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}