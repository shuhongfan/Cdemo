#include "stdio.h"

int main(){
    int prime(int);
    int n;
    scanf("%d",&n);
    if(prime(n)){
        printf("%d is prime",n);
    } else {
        printf("%d is not a prime.",n);
    }
    return 0;
}

int prime(int n){
    int flag=1,i;
    for(i=2;i<n/2&&flag==1;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}