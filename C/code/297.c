//
// Created by shuhongfan on 2021/4/17.
//

#include "stdio.h"
void main(){
    int i,j,k,money=100;
    for(i=0;i<money;i++)
        for(j=0;j<money;j++)
            for(k=0;k<money;k++)
                if((i+j+k==100)&&(5*i+3*j+k/3==money))
                    printf("鸡公：%d,鸡母：%d，鸡雏：%d\n",i,j,k);
}