//
// Created by shuhongfan on 2021/6/6.
//

#include<stdio.h>
#include<math.h>


void main(){
    int a,b,c,d;
    scanf("%d",&a);
    for(b=3;b<=a/2;b+=2)
    {
        for(c=2;c<=sqrt(b);c++)
            if(b%c==0)
                break;
        if(c>sqrt(b))
            d=a-b;
        else
            break;

        for(c=2;c<=sqrt(d);c++)
            if(d%c==0)
                break;
        if(c>sqrt(d))
            printf("%d+%d\n",b,d);
    }
}