#include "stdio.h"

int A;
int main(){
    int power(int);
    int b=3,c,d,m;
    scanf("%d,%d",&A,&m);
    c=A*b;
    printf("%d*%d=%d\n",A,b,c);
    d=power(m);
    printf("%d * * %d=%d\n",A,m,d);
    return 0;
}

int power(int n){
    int i,y=1;
    for(i=1;i<=n;i++) y*=A;
    return y;
}