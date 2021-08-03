//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int n;
    double sn=100,hn=sn/2;
    for(n=2;n<=10;n++){
        sn=sn+hn*2;
        hn=hn/2;
    }
    printf("sn=%f,hn=%f",sn,hn);
}