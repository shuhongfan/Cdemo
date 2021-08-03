//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i,j,k,t,a[10];
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<9;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if(a[j]<a[k]) k=j;
        }
        if(k!=i){t=a[k];a[k]=a[i];a[i]=t;}
    }
    for(i=0;i<10;i++) printf("%d ",a[i]);
}
//1 16 5 98 23 119 18 75 65 81