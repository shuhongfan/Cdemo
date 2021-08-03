//
// Created by shuhongfan on 2021/5/28.
//

#include <stdio.h>

int main(){
    int i,k=19;
    while(i=k-1){
        k=k-3;
        if(k%5==0){
            i++;continue;;
        } else if(k<5) break;
        i++;
    }
    printf("i=%d,k=%d\n",i,k);
}