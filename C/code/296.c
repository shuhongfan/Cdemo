//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int peach=0;
    int rest=1;
    int day=0;
    for(day=9;day>0;day--){
        peach=(rest+1)*2;
        rest=peach;
    }
    printf("peach=%d",peach);
}