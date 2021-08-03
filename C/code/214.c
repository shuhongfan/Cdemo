#include <stdio.h>

int main(){
    int n,a[10],*ptr=a;
    // for(n=0;n<10;n++) scanf("%d",&a[n]);
    for(n=0;n<10;n++) scanf("%d",ptr+n);
    printf("1----------output!\n");
    for(n=0;n<10;n++) printf("%4d",*(ptr+n));
    printf("\n");
}