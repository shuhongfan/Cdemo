//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    float sn=100,hn=sn/2;
    int i;
    for(i=2;i<=10;i++){
        sn+=hn*2;
        hn/=2;
    }
    printf("sn=%f,hn=%f",sn,hn);
}