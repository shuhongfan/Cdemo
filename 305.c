//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int x,y;
    for(y=1;y<10;){
        y=((x=3*y,x+1),x-1);
        x=3*y;
        y=x-1;
        printf("x=%d,y=%d\n",x,y);
    }
    printf("x=%d,y=%d\n",x,y);
}