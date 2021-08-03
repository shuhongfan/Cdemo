//
// Created by shuhongfan on 2021/6/8.
//

#include <stdio.h>

int main(){
    int i,g,s;
    for(i=10;i<100;i++){
        g=i%10;
        s=i/10;
        if(g*s>g+s) printf("%d\t",i);
    }
}