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
    printf("2345��λ����ƽ����=%d",sum);
}