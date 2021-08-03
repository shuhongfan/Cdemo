//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int x,i;
    for(i=1;i<=100;i++){
        x=i;
        if(++x%2==0){
            if(++x%3==0){
                if(++x%7==0){
                    printf("x=%d,i=%d\n",x,i);
                }
            }
        }
    }
}