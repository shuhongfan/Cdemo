//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>

int main(){
    int num,count=0,g,s,b,q,w;
    scanf("%d",&num);
    w=num/10000;
    q=num/1000%10;
    b=num/100%10;
    s=num/10%10;
    g=num%10;
    if(w) printf("5 wei=%d %d %d %d %d",g,w,b,q,w);
    else if(q) printf("4 wei=%d %d %d %d",g,s,b,q);
    else if(b) printf("3 wei=%d %d %d",g,s,q);
    else if(s) printf("2 wei=%d %d",g,s);
    else printf("1 wei=%d",g);
}