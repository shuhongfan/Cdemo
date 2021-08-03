//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>
int sushu(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0) return 0;
    }
    return 1;
}
int main(){
    int i;
    for(i=2;i<=100;i++){
        if(sushu(i)==1) printf("%d\t",i);
    }
}