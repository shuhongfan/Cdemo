#include <stdio.h>

int main(){
    int i;
    for(i=0;i<=4;i++){
        pstar(i*2+1);
    }
}

pstar(num)
int num;
{
    int i;
    for(i=1;i<=num;i++){
        printf("*");
    }
    printf("\n");
}