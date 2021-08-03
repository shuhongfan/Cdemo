//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#include <math.h>
//int prime(int n){
//    int i;
//    for(i=2;i<=sqrt(n);i++){
//        if(n%i==0) return 0;
//    }
//    return 1;
//}
int prime(int n){
    int flag=1,i;
    for(i=2;i<n/2&&flag==1;i++){
        if(n%i==0) flag=0;
    }
    return flag;
}
int main(){
    int num;
    scanf("%d",&num);
    if(prime(num)) printf("%d is prime.",num);
    else printf("%d is not prime.",num);
}