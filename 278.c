//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>
int main(){
    int a=2,b=7,c=5;
    switch (a>0) {
        case 1:switch(b<0){
                case 1:printf("@");break;
                case 2:printf("!");break;
        }
        case 0:switch(c==5){
                case 0:printf("*");break;
                case 1:printf("#");break;
                default:printf("#");break;
        }
        default:printf("&");
    }
}