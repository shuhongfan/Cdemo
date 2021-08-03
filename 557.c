//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int a=2,n=5,i=0,t=0,s=0;
    while(i<n){
        i++;
        t=t+a;
        s=s+t;
        a=a*10;
    }
    printf("%d",s);
}