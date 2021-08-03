//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int main(){
    int i,j,x=0;
    for(i=0;i<2;i++){
        x++;
        printf("  x=%d\n",x);
        for(j=0;j<=3;j++){
            if(j%2) continue;
            x++;
            printf("x=%d\n",x);
        }
        x++;
        printf("  x=%d\n",x);
    }
//    printf("x=%d\n",x);
}