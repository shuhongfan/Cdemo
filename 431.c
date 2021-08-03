//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i,j,t,a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(j<i) {t=j;j=i;i=t;}
        }
    }
    printf("%d %d %d %d",a,b,c,d);
}