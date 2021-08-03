//
// Created by shuhongfan on 2021/6/15.
//

#include <stdio.h>
#define SQR(X) X*X
int main(){
    int a=16,k=2,m=1;
    a/=SQR(k+m)/SQR(k+m);
    printf("%d\n",a);
}