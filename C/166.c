#include <stdio.h>

int main(){
    int a[10];
    int *p,i;
    for(p=a;p<(a+10);p++) scanf("%d",p);
    for(p=a;p<(a+10);p++) printf("%d ",*p);
}