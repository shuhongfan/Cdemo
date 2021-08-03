#include "stdio.h"

int main(){
    int prime(int num);
    int i;
    scanf("%d",&i);
    if(prime(i)) printf("%d is prime",i);
    else printf("%d is not prime",i);
}

int prime(int n)
{
    int i,flag=1;
    for(i=2;i<n/2&&flag==1;i++){
        if(n%i==0) flag=0;
    }
    return flag;
}