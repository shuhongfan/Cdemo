//
// Created by shuhongfan on 2021/6/11.
//

#include <stdio.h>

int main(){
    int i,a,n,tn=0,sn=0;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++){
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
    }
    printf("%d\n",sn);
}