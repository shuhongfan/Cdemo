//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
#include "math.h"
void main(){
    int num,i,g,s,b;
    for(i=100;i<=999;i++){
        b=i/100;
        s=i/10%10;
        g=i%10;
        if(pow(b,3)+ pow(s,3)+ pow(g,3)==i){
            printf("%d\t",i);
        }
    }
}