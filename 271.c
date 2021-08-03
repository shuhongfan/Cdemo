//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>

int main(){
    int y,t;
    scanf("%d",&y);
    printf("%d",y%100);
    t=((y%4==0)&&(y%100!=0)||(y%400==0))?1:0;
    if(t) printf("%d is",y);
    else printf("%d is not",y);
}