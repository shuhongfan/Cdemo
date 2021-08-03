//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>
// 12 54
int main(){
    int m,n,t,r,p;
    scanf("%d %d",&m,&n);
    if(m<n){t=m;m=n;n=t;}
    r=m%n;
    p=m*n;
    while(r){
        m=n;
        n=r;
        r=m%n;
    }
    printf("最大公约数:%d\t最小公倍数:%d",n,p/n);
}