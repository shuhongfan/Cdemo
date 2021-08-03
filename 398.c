//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>

int main(){
    int x,y,z,max;
    scanf("%d %d %d",&x,&y,&z);
    max=x;
    if(max<y) max=y;
    if(max<z) max=z;
    printf("max=%d",max);
}