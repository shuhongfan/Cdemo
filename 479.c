//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#include <math.h>
int prime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int prime(int n);
    int i,sum=0;
    for(i=2;i<=500;i++){
        if(prime(i)==1){
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nsum=%d",sum);
    return 0;
}