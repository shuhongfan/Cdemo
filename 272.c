//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>

int main(){
    int i,j,x=0;
    for(i=0;i<2;i++)
    {
        x++;
        for(j=0;j<3;j++)
        {
            if(j%2!=0){
                printf("%d\n",j);
                continue;
            }
            x++;
        }
        x++;
    }
    printf("%d",x);
}