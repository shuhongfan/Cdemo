//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
#include "string.h"
main()
{
    char s[100],d[100];
    int j=0,i=0;
    while (s[i]){
        d[j]=s[i++];
        j++;
    }
    d[j]=0;
}