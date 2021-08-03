//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int i,a,n,s=0,t=0;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++){
        t=t+a;
        s=s+t;
        a=a*10;
    }
    printf("sum=%d",s);
}