//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
int hcf(int m,int n){
    int t,r;
    if(m<n){t=m;m=n;n=t;}
    r=m%n;
    while(r){
        m=n;
        n=r;
        r=m%n;
    }
    return n;
}
int lcd(int m,int n,int r){
    return m*n/r;
}
int main(){
    int m,n,f;
    scanf("%d %d",&m,&n);
    f=hcf(m,n);
    printf("hcf=%d\n",f);
    printf("lcd=%d\n",lcd(m,n,f));
}