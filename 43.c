#include "stdio.h"

int main(){
    int f1=1,f2=1,f3;
    printf("%d\t",f1);
    printf("%d\t",f2);
    for(int i=1;i<=38;i++){
        f3=f1+f2;
        printf("%d\t",f3);
        if(i%5==0) printf("\n");
        f1=f2;
        f2=f3;
    }
}