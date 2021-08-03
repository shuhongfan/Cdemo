//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>

int fun(int x,int y){
    static int m=0,i=2;
    i+=m+1;
    m=i+x+y;
    return m;
}
int main(){
    int j=4,m=1,k;
    k=fun(j,m);
    printf("%d",k);
    k=fun(j,m);
    printf("%d",k);
}