//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int fb[40]={1,1},i,count=0;
    for(i=2;i<40;i++){
        fb[i]=fb[i-1]+fb[i-2];
    }
    for(i=0;i<40;i++){
        printf("%15d",fb[i]);
        count++;
        if(count%5==0) printf("\n");
    }
}