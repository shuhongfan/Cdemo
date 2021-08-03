//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,k=0;
    for(i=1;i<1000;i++){
        if((i%7==0||i%11==0)&&!(i%7==0&&i%11==0)){
            printf("%d\t",i);
            k++;
            if(k%5==0) printf("\n");
        }
    }
}