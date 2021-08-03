#include <stdio.h>

int main(){
    int i,a[5];
    for(i=0;i<=4;i++) a[i]=i;
    for(i=0;i<=4;i++) printf("a[%d]=%d\n",i,a[i]);
}