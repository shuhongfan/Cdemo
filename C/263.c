//
// Created by shuhongfan on 2021/6/1.
//

#include <stdio.h>
int main(){
    int a,b,c;
    int s,w,t;
    s=w=t=0;
    a=-1;b=3;c=3;
    if(c>0) s=a+b;
    if(a<=0){
        if(b>0){
            if(c<=0){
                w=a-b;
            }
        }
    }
    else if(c>0) w=a-b;
    else t=c;
    printf("%d %d %d",s,w,t);
}