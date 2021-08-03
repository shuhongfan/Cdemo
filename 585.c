//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>
int swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return 0;
}
int main(){
    int a,b,c,*p1,*p2,*p3;
    scanf("%d%d%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(a>b) swap(p1,p2);
    if(a>c) swap(p1,p3);
    if(b>c) swap(p2,p3);
    printf("a=%d,b=%d,c=%d",a,b,c);
}