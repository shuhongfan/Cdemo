#include <stdio.h>

int *max(int a[],int n){
    int *p,i;
    for(p=a,i=1;i<n;i++){
        if(*p<a[i]) p=a+i;
        return p;
    }
}
int main(){
    int a[10],*q,i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    q=max(a,10);
    printf("\nMAX=%d",*q);
}