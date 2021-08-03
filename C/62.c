#include "stdio.h"

int main(){
    double n1=1,n2=2,n3,sum;
    int i;
    for(i=1;i<=20;i++){
        sum=sum+n2/n1;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("%16.10f",sum);
}