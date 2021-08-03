//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,j,sum=0,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=i;j++)  k*=j;
        sum+=k;
    }
    printf("%d",sum);
}