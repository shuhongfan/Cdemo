//
// Created by shuhongfan on 2021/6/8.
//
#include <stdio.h>

int main(){
    int r,w,b;
    for(r=0;r<=3;r++){
        for(w=0;w<=5;w++){
            for(b=1;b<=5;b++){
                if(r+w+b==8) printf("red=%d white=%d black=%d\n",r,w,b);
            }
        }
    }
}
