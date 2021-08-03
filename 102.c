#include "stdio.h"

int main(){
    char a[5],space=' ';
    int i,j,k;
    for(i=0;i<5;i++) a[i]='*';
    for(i=0;i<5;i++){
        for(j=1;j<=i;j++) printf("%c",space);
        for(k=0;k<5;k++) printf("%c",a[k]);
        printf("\n");
    }
}