//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3-i;j++) printf(" ");
        for(j=0;j<=2*i;j++) printf("*");
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<=i;j++) printf(" ");
        for(j=0;j<=2*(2-i);j++) printf("*");
        printf("\n");
    }
}