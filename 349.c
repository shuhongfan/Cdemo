//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int x=-1;
    do {
        x=x*x;
        printf("%d",x);
    }
    while (!x!=0);
}