//
// Created by shuhongfan on 2021/4/28 0028.
//

#include "stdio.h"
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void main(){
    int n1,n2,n3;
    scanf("%d,%d,%d",&n1,&n2,&n3);
    int *a=&n1,*b=&n2,*c=&n3;
    printf("a=%d,b=%d,c=%d\n",*a,*b,*c);
    if(*a<*b) swap(a,b);
    if(*a<*c) swap(a,c);
    if(*b<*c) swap(b,c);
    printf("a=%d,b=%d,c=%d\n",n1,n2,n3);
}