//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>
#include <math.h>
int main(){
    int i,g,s,b,q;
    for(i=1000;i<=9999;i++){
        g=i%10;
        s=i/10%10;
        b=i/100%10;
        q=i/1000;
        if(pow(g,4)+pow(s,4)+pow(b,4)+pow(q,4)==i)
            printf("%d ",i);
    }
}