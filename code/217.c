#include <stdio.h>

int main(){
    int a[3][4],*ptr;
    int i,j;
    ptr=a[0];
    for(i=0;i<12;i++){
        scanf("%d",ptr++);
    }
    ptr=a[0];
    for(i=0;i<12;i++){
        printf("%4d",*ptr++);
    }
}