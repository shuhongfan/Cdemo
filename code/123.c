#include <stdio.h>

int main(){
    int i,sum;
    i=4;
    sum=0;
    while(i<=3){
        sum+=i;
        i++;
    }
    printf("sum=%d",sum);
}