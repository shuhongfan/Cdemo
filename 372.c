//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,j,k;
    for(i=2;i<=100;i++){
        k=1;
        for(j=2;j<i;j++){
            if(i%j==0) k=0;
        }
        if(k==1) printf("%d\t",i);
    }
}