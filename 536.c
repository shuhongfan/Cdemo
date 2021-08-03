//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>

int main(){
    int i,j,t,k,a[8];
    for(i=0;i<8;i++) scanf("%d",&a[i]);
    for(i=0;i<8-1;i++){
        k=i;
        for(j=i+1;j<8;j++)
            if(a[j]<a[k]) k=j;
        if(k!=i){t=a[k];a[k]=a[i];a[i]=t;}
    }
    for(i=0;i<8;i++) printf("%d ",a[i]);
}