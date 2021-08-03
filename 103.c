#include "stdio.h"

int main(){
    int i,j,k;
    char a[5];
    for(i=0;i<5;i++) a[i]='*';
    for(i=0;i<5;i++){
        for(j=0;j<i;j++) printf(" ");
        // puts(a);
        for(k=0;k<5;k++) printf("%c",a[k]);
        printf("\n");
    }
}