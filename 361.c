//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int sum=0,i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=i;j++){
            k=k*j;
        }
        sum+=k;
    }
    printf("sum=%d",sum);
}