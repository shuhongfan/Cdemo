//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,ge,shi;
    for(i=10;i<100;i++){
        ge=i%10;
        shi=i/10;
        if(ge*shi>ge+shi)
            printf("%d\t",i);
    }
}