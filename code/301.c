//
// Created by shuhongfan on 2021/4/23.
//

#include "stdio.h"
#include "string.h"
main()
{ char a[]={'a','b','c','d', 'e', 'f', 'g','h','\0'};
    int  i,j;
    i=sizeof(a);   j=strlen(a);
    printf("%d,%d",i,j);
}
