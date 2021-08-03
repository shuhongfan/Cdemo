//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int m,n,t,r,p;
    scanf("%d%d",&m,&n);
    if(m<n){t=m;m=n;n=t;}
    p=m*n;
    r=m%n;
    while(r){
        m=n;
        n=r;
        r=m%n;
    }
    printf("MAX-yuehsu=%d\nMIN-beishu=%d",n,p/n);
}