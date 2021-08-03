//
// Created by shuhongfan on 2021/6/16.
//

#include<stdio.h>
int main(){
    int day=0,buy=2;
    float sum=0,avg;
    while (buy<=100){
        day++;
        sum+=buy*0.8;
        buy=buy*2;
    }
    avg=buy/day;
    printf("%f",avg);
}