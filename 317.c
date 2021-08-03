//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int x=3,y;
    do{
        y=x--;
        if(!y) {
            printf("*");continue;
        }
        printf("#");
    } while (1<=x<=2);
}