//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    float x,y;
    scanf("%f",&x);
    if(x<=0) y=0;
    else if(x>0&&x<=10) y=x;
    else if(x>10&&x<=20) y=10;
    else if(x>20&&x<40) y=0.5*x+20;
    else y=-1;
    if(y==-1) printf("error");
    else printf("%f",y);
}