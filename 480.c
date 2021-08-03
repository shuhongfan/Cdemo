//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#include <math.h>
int main(){
    int i,j,k,sum=0;
    for(i=2;i<=500;i++){
        k=sqrt(i);
        for(j=2;j<=k;j++)
            if(i%j==0) break;
        if(j>k){
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nsum=%d",sum);
}