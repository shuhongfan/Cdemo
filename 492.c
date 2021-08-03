//
// Created by shuhongfan on 2021/6/14.
//


#include "stdio.h"
void main()
{int cock,hen,chick;
    for(cock=1;cock<20;cock++)
        for(hen=1;hen<33;hen++)
        {chick=100-cock-hen;
            if(cock*5+hen*3+chick/3==100)
                printf("cock:%d hen:%d chick:%d\n",cock,hen,chick);
        }}