//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int  main(){
//    time_t timer=time(NULL);
//    srand((size_t)time(timer));
    srand((size_t)time(NULL));

    for (int i = 0; i < 100; ++i) {
        printf("%d\n",rand()%51+50);
    }

}