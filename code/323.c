//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,ge,shi;
    for(i=10;i<100;i++){
        ge=i%10;
        shi=i/10;
        if(ge*shi<ge+shi){
            printf("%d\t",i);
        }
    }
}


//#include<stdio.h>
//void  main()
//{
//    int num,gw,sw;
//    for(num=10;num<100;num++)
//    {
//        gw=num%10;
//        sw=num/10;
//        if (gw*sw<gw+sw)
//            printf("%3d",num);
//    }
//}
