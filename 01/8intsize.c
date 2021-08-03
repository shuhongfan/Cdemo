//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int a=10;
//    短整型
    short b=20;
//    长整型
    long c=30;
//    常常整型
    long long d=40;


    printf("%d\n",a);
//    短整型
    printf("%hd\n",b);
//    长整型
    printf("%ld\n",c);
//    常常整型
    printf("%lld\n",d);

    unsigned int len=sizeof(a);
    printf("整型：%d\n",sizeof(a));
    printf("短整型：%d\n",sizeof(b));
    printf("长整型：%d\n",sizeof(c));
    printf("长长整型：%d\n",sizeof(d));

    return 0;
}