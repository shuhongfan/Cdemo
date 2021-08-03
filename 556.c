//
// Created by shuhongfan on 2021/6/18.
//

#include "stdio.h"

int main(){
    int a,n,i=1,t=0,s=0;
    scanf("%d %d",&a,&n);
    while(i<=n){
        t=t+a;
        s=s+t;
        a=a*10;
        i++;
    }
    printf("%d",s);
}