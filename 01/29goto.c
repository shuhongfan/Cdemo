//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main111(){
    printf("hello world1\n");
    printf("hello world2\n");
    printf("hello world3\n");
    goto FLAG;
    printf("hello world4\n");
    printf("hello world5\n");

    FLAG:
    printf("hello world6\n");
}

int main(){
    int i=0,j=0;
    for (int i = 0; i < 10; ++i) {
        if (i==5){
            goto FLAG1;
        }
        printf("i=%d\n",i);
    }
    for (int j = 0; j < 10; ++j) {
        FLAG1:
            printf("j=%d\n",j);
    }
}