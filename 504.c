//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>

int main(){
    int i,t=0,s=0;
    for(i=1;i<=10;i++){
        t=t+i;
        s=s+t;
    }
    printf("%d",s);
}