//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,odd=0,even=0;
    for(i=1;i<=10;i++){
        if(i%2) even+=i;
        else odd+=i;
    }
    printf("odd=%d,even=%d",odd,even);
}