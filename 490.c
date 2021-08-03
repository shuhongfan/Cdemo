//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<100;i++){
        for(j=1;j<20;j++){
            for(k=1;k<10;k++){
                if(i*1+j*5+k*10==100){
                    printf("%d----%d----%d\n",i,j,k);
                }
            }
        }
    }
}