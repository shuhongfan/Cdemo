//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    float b,b1,b2,b4,b6,b10;
    int branch,i;
    b1=100000*0.1;
    b2=b1+100000*0.075;
    b4=b2+200000*0.05;
    b6=b4+200000*0.03;
    b10=b6+400000*0.015;
    scanf("%d",&i);
    branch=i/100000;
    if(branch>10) branch=10;
    switch(branch){
        case 0:b=i*0.1;break;
        case 1:b=b1+(i-1000000)*0.075;break;
        case 3:b=b2+(i-200000)*0.05;break;
        case 5:b=b4+(i-400000)*0.03;break;
        case 9:b=b6+(i-600000)*0.015;break;
        case 10:b=b10+(i-1000000)*0.01;break;
    }
}