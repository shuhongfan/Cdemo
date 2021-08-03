//
// Created by shuhongfan on 2021/6/5.
//

#include <stdio.h>
int main()
{
    int n=2345,sum=0;
    do {
        sum+=(n%10)*(n%10);
        n/=10;
    }while(n);
    printf("2345各位数字平方和=%d",sum);
}