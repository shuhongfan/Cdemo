#include "stdio.h"

int main(){
    double sum=100,tan=sum/2;
    int i;
    for(i=1;i<10;i++){
        sum=sum+tan*2;
        tan=tan/2;
    }
    printf("%f %f",sum,tan);
}