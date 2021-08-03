#include <stdio.h>

int main(){
    int n,j=0;
    for(n=100;n<=200;n++){
        if(n%3==0) continue;
        printf("%d  ",n);
        j++;
        if(j%5==0) printf("\n");
    }
}