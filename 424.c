//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>
#include <math.h>

int main(){
    int i,k;
    printf("scanf i=");
    scanf("%d",&i);
    while (i>1000){
        printf("error max=1000,try again!\n");
        printf("scanf i=");
        scanf("%d",&i);
    }
    k= sqrt(i);
    printf("%d",k);
}