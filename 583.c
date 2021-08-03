//
// Created by shuhongfan on 2021/6/18.
//
#include <stdio.h>
#include <math.h>
int prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int i,count=0;
    for(i=2;i<=100;i++){
        if(prime(i)==1){
            printf("%d\t",i);
            count++;
            if(count%5==0) printf("\n");
        }
    }
}
