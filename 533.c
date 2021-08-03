//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>

int main(){
    int i,s=0,t=1;
    for(i=1;i<=10;i++){
        t=t*i;
        s=s+t;
        printf("%d\n",t);
    }
    printf("sum=%d",s);
    return 0;
}