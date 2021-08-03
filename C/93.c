#include "stdio.h"
#define N 5
int main(){
    int a[N],i,temp;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N/2;i++){
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
    for(i=0;i<5;i++) printf("%4d",a[i]);
}