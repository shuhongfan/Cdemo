//
// Created by shuhongfan on 2021/6/13.
//
#include <stdio.h>
#include <string.h>
main()
{ int i, n,temp; char a[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n/2;i++)
    {   temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    puts(a);
}