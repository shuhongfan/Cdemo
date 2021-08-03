//
// Created by shuhongfan on 2021/6/8.
//
#include <stdio.h>
int main()
{ int k=5,n=0;
    while(k>0)
    { switch(k)
        { default : break;
            case 1 : n+=k;
            case 2 :
            case 3 : n+=k;
        }
        k--;
        printf("%d\n",n);
    }
    printf("%d\n",n);
}