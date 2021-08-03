#include "stdio.h"
int main(){
    int i,sign=1;
    float sum=1.0;
    for(i=2;i<=100;i++){
        sign=sign*-1;
        sum=sum+sign*(1.0/i);
    }
    printf("%f",sum);
    return 0;
}