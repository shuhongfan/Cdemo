//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int a,n,i,s=0,t=0;
    scanf("%d%d",&a,&n);
    for(i=0;i<n;i++){
        t=t+a;
        s=s+t;
        a=a*10;
    }
    printf("%d",s);
}