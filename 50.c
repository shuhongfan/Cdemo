#include "stdio.h"

int main(){
    int m,n,t,p,r;
    scanf("%d %d",&m,&n);
    if(n<m){
        t=n;n=m;m=t;
    }
    p=n*m;
    while(m!=0){
        printf("%d %d %d\n",n,m,r);
        r=n%m;
        n=m;
        m=r;
    }
    printf("max=%d\n",n);
    printf("min=%d\n",p/n);
    return 0;
}