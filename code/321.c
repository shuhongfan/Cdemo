//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,j,flag;
    for(i=2;i<=100;i++){
        for(j=2;j<i;j++){
            if(i%j==0) {
                flag=0;
                break;
            }
        }
        if(flag==1) printf("%d\t",i);
        flag=1;
    }
}