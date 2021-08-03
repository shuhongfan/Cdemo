//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int red,white,black;
    for(red=0;red<=3;red++)
        for(white=1;white<=5;white++)
            for(black=0;black<=6;black++)
                if(red+white+black==8)
                    printf("red=%d,white=%d,black=%d\n",red,white,black);
}