#include <stdio.h>

int main(){
    int a[2],i;
    void f();
    for(i=0;i<2;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    f(a,2);
    for(i=0;i<2;i++){
        printf("a=[%d]=%d\n",i,a[i]);
    }
}

void f(int b[],int n){
    int i;
    for(i=0;i<n;i++){
        b[i]+=1;
    }
}