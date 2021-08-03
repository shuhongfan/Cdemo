//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>

int main(){
    int i=0,s=0;
    for(;;){
        if(i==3||i==5) continue;
        if(i==6) break;
        i++;
        s+=i;
    }
    printf("%d",s);
}