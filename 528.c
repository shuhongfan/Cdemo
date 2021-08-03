//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    float data1,data2,result;
    char op;
    scanf("%d%d%c",&data1,&data2,&op);
    switch (op) {
        case '+':result=data1+data2;break;
        case '-':result=data1-data2;break;
        case '*':result=data1*data2;break;
        case '/':result=data1/data2;break;
    }
    printf("result=%f",result);
}