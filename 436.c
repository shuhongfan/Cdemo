//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i,a,n,sn=0;
    scanf("%d %d",&a,&n);
    for(i=0;1<n;i++){
        sn+=a;
        a=a*10;
    }
    printf("%d\n",sn);
}