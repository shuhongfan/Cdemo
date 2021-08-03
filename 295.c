//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int a=2;
int f(int *a){
    return (*a)++;
}

int main(){
    int s=0;
    {
        int a=5;
        s=s+f(&a);
        printf("%d\n",s);
    }
    s=s+f(&a);
    printf("%d\n",s);
}