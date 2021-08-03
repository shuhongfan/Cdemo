//
// Created by shuhongfan on 2021/6/10.
//

#include <stdio.h>
int main(){
    int i;
    for(i=0;i<100;i++){
        printf("%d\t",i);
        if((i+1)%5==0) printf("\n");
    }
}
