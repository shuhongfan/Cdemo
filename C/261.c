//
// Created by shuhongfan on 2021/6/1.
//

#include <stdio.h>

int main(){
    int x,y,z;
    x=1;
    y=2;
    z=3;
    x=(y--<=x)||(x+y!=z);
    printf("%d,%d",x,y);
}