//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int i,j,a=0;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(j%2) break;
            a++;
            printf("%d\n",a);
        }
        a++;
        printf(" %d\n",a);
    }
    printf("  %d\n",a);
}