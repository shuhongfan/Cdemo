//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
int main()
{ long i,t=2,s=0;
    s=t;
    for(i=1;i<11;i++)
    { t=t*10; s=s+t;
        printf( "%ld \n",t );
    }
    printf( "%ld \n",s );
}
