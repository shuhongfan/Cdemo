#include <stdio.h>
#include <string.h>

int main(){
    int a[5]={10,20,30,40,50};
    int b[5]={1,2,3};
    int c[]={0,1,2,3};
    int i;

    printf("数组A");
    for(i=0;i<5;i++) printf("%5d",a[i]);
    printf("\n");

    printf("数组B");
    for(i=0;i<5;i++) printf("%5d",b[i]);
    printf("\n");

    printf("数组C");
    for(i=0;i<4;i++) printf("%5d",c[i]);
}