#include "stdio.h"

int main(){
    int m,n,temp,p;
    scanf("%d %d",&m,&n);
    if(m<n){
        temp=m;
        m=n;
        n=temp;
    }
    p=m*n;
    while(n!=0){
        temp=m%n;
        m=n;
        n=temp;
    }
    printf("max=%d\n",m);
    printf("min=%d",p/m);
}