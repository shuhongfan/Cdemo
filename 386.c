//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>
#include <math.h>
int sushu(int num){
    int i;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0) return 0;
    }
    return 1;
}
int main(){
    int i,num[100],j=0;
    for(i=2;i<=100;i++){
        if(sushu(i)==1) {
            num[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++) printf("%d\t",num[i]);
}