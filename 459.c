//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#define N 5
int main(){
    int i,t,a[N];
    for(i=0;i<N;i++)
        scanf("%d",a[i]);
    for(i=0;i<N/2;i++){
        t=a[N];
        a[N]=a[N-1-i];
        a[N-1-i]=t;
    }
    for(i=0;i<N;i++) printf("%d ",a[i]);
}