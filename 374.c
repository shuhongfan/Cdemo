//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,count=0;
    for(i=1;i<=1000;i++){
        if(i%7==0||i%11==0){
            if(!(i%7==0&&i%11==0)){
                printf("%d\t",i);
                count++;
                if(count%5==0) printf("\n");
            }
        }
    }
}