//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
int main(){
    int i=100;
    while(1){
        i=i%100+1;
        printf("%d\n",i);
        if(i>100) break;
    }
}