#include <stdio.h>

int main(){
    int i,sum;
    i=4;
    sum=0;
    // while(i<=3){
    //     sum+=i;
    //     i++;
    // }
    do{
        sum+=i;
        i++;
    }while(i<=3);
    printf("sum=%d",sum);
}