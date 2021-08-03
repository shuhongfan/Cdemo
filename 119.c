#include "stdio.h"

int main(){
    int max(int x,int y);
    int a[10],m,n,i;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    n=0;
    m=a[0];
    for(i=1;i<10;i++){
        if(max(m,a[i])>m){
            m=max(m,a[i]);
            n=i;
        }
    }
    printf("The largest number is %d\n it is the %dth number.\n",m,n+1);
}

int max(int x,int y){
    return x>y?x:y;
}