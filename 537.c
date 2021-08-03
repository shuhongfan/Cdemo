//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>
int pr(int a[],int n){
    int i;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
int sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    return 0;
}
int sort1(int a[],int n){
    int i,j,k,t;
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[k]) k=j;
        }
        if(k!=i) {
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    return 0;
}
int main(){
    int a[10]={1,3,6,2,7,10,4,9,5,8};
    sort1(a,10);
    pr(a,10);
}