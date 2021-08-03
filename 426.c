//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    if(x<0) y=-1;
    else if(x==0) y=0;
    else if(x>0) y=1;
    printf("%d",y);
}