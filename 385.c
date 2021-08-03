//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>
#include <math.h>
int main(){
    int i,g,s,b;
    for(i=100;i<=999;i++){
        g=i%10;
        s=i/10%10;
        b=i/100;
        if(pow(g,3)+ pow(s,3)+ pow(b,3)==i) printf("%d\t",i);
    }
}