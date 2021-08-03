//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int range(int *a,int *b,int *c){
    int temp;
    if(*a>*b){temp=*a;*a=*b;*b=temp;}
    if(*a>*c){temp=*a;*a=*c;*c=temp;}
    if(*b>*c){temp=*b;*b=*c;*c=temp;}
}
int main(){
    int a,b,c,*a1=&a,*b1=&b,*c1=&c;
    scanf("%d %d %d",a1,b1,c1);
    range(a1,b1,c1);
    printf("%d %d %d\n",*a1,*b1,*c1);
    printf("%d %d %d\n",a,b,c);
}