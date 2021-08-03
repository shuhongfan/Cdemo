//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>

int main(){
    int i=123;
    while(i){
        printf("%d\t",i%10);
        i=i/10;
    }
}