//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>

main()
{ int a,b,*p,*p1,*p2;
    printf( "input a,b: ");
    scanf( "%d%d",&a,&b);
    p1=&a;
    p2=&b;
    if(a<b)
    { p=p1; p1=p2; p2=p; }
    printf( "a=%d b=%d \n",a,b);
    printf( "max=%d min=%d \n",*p1,*p2);
}