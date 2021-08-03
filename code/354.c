#include "stdio.h"
#include "string.h"

main()
{  char  a[]="123456789",*p;
    int  i=0;
    p=a;
    while(*p)
    {
        if(i%2)
        *p='*';
        p++;i++;
    }
    puts(a);
}
