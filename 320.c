//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int a[10]={1,59,12,568,1348,154,3635678,36,88,63},i,j,k,t;
    for(i=0;i<10-1;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if(a[j]>a[k]) k=j;
        }
        if(k!=i){t=a[k];a[k]=a[i];a[i]=t;}
    }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
}