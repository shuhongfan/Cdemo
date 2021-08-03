#include <stdio.h>

int main(){
    int i,a[10],*p=a;
    for(i=0;i<10;i++) scanf("%d",p++);
    p=a;
    for(i=0;i<10;i++) printf("%d ",*p++);
    return 0;
}