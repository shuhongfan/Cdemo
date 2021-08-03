//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,j,k,red=3,white=5,black=6;
    for(i=0;i<=red;i++){
        for(j=0;j<=white;j++){
            for(k=1;k<=black;k++){
                if(i+j+k==8){
                    printf("red=%d,white=%d,black=%d\n",i,j,k);
                }
            }
        }
    }
}
//void  main()
//{
//    int red,white,black;
//    for(red=0;red<=3;red++)
//        for(white=0;white<=5;white++)
//            for(black=1;black<=6;black++)
//                if(red+white+black==8)
//                    printf("红球=%d,白球=%d,黑球=%d\n",red,white,black);
//}
