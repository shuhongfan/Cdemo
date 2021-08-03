//
// Created by shuhongfan on 2021/6/16.
//

#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%3==0&&num%5==0&&num%7==0) printf("3,5,7=%d",num);
    else if(num%3==0&&num%5==0) printf("3,5=%d",num);
    else if(num%3==0&&num%7==0) printf("3,7=%d",num);
    else if(num%5==0&&num%7==0) printf("5,7=%d",num);
    else if(num%3==0) printf("3=%d",num);
    else if(num%5==0) printf("5=%d",num);
    else if(num%7==0) printf("7=%d",num);
    else if(num%3==0||num%5==0||num%7==0) printf("not 3,5,7=%d",num);
}