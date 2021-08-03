#include "stdio.h"

int main(){
    int sum=0,a,n,i,temp;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++){
        temp=temp*10+a;
        sum=sum+temp;
    }
    printf("%d",sum);
}