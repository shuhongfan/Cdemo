//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j==5){
                break;
            }
            printf("%d---%d\n",i,j);
        }
    }
}