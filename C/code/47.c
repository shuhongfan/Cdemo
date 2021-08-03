#include <stdio.h>

int main(){
    int n=7;
    n+=n=n*=n/3;
    printf("n=%d\n",n);
}