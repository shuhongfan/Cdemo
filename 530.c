//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>

int main(){
    int i=2,day=0;
    float sum=0,av;
    while(i<=100){
        day++;
        sum+=i*0.8;
        i=i*2;
    }
    av=sum/day;
    printf("%f",av);
}