//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++) printf(" ");
        for(j=0;j<5;j++) printf("*");
        printf("\n");
    }
}