#include <stdio.h>
#define SQU(n) ((n)*(n))
int square(int n){
    return  n*n;
}
int main(){
    int i=1;
    while(i<=10){
        printf("%d\t",square(i++));
    }
    i=1;
    printf("\n");
    while(i<=10){
        printf("%d\t",SQU(i++));
    }
}