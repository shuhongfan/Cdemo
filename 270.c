//
// Created by shuhongfan on 2021/6/2.
//

#include <stdio.h>

int main(){
    int t,h,m;
    scanf("%d",&t);
    h=t/100%12;
    if(h==0) h=12;
    printf("%d:",h);
    m=t%100;
    if(m<10) printf("0");
    printf("%d",m);
    if(t<1200||t==2400) printf("AM");
    else printf("PM");
}