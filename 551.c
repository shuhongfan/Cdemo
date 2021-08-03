//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int m,n,t,r,p;
    scanf("%d %d",&m,&n);
    if(m<n){t=m;m=n;n=t;}
    p=m*n;
    while(n){
        r=m%n;
        m=n;
        n=r;
    }
    printf("MAX-yueshu=%d\nMIN-beishu=%d",m,p/m);
}