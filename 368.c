//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>
#include <math.h>
int main(){
    int i,j,k;
    for(i=1;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                if(pow(i,3)+ pow(j,3)+ pow(k,3)==i*100+j*10+k){
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}