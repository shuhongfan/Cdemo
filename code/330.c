//
// Created by shuhongfan on 2021/4/25 0025.
//

#include "stdio.h"
int sushu(int num){
    int i,flag=0;
    for(i=2;i<num;i++){
        if(num%i==0) {
            flag=0;
            break;
        } else {
            flag=1;
        }
    }
    return flag;
}
void main(){
    int num;
    scanf("%d",&num);
    sushu(num)?printf("%d是素数",num): printf("%d不是素数",num);
}