//
// Created by shuhongfan on 2021/6/1.
//

#include <stdio.h>

int main(){
    int x,y=-2,z=0;
    if((z=y)<0) x=4;
    else if(y==0) x=5;
    else x=6;
    printf("\t%d\t%d\t%d\n",x,y,z);
    if(z=(y==0)){
        x=5;
    }
    y=4;
    printf("\t%d\t%d\t%d\n",x,y,z);
    if(x=z=y) x=4;
    printf("\t%d\t%d\t%d\n",x,y,z);
}