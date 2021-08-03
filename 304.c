//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int a=2;
int f(int n){
    static int a=3;
    int t=0;
    if(n%2){static int a=4;t=t+a++;}
    else {static int a=5;t=t+a++;}
    printf("%d\n",t+a++) ;
}

int main(){
    int s=a,i;
    for(i=0;i<3;i++) s=s+f(i);
    printf("%d\n",s);
}