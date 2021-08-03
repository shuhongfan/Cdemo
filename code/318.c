//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"

void main(){
    int i,temp;
    float fz=2,fm=1,sum=0;
    for(i=0;i<20;i++){
        sum=sum+fz/fm;
        temp=fz;
        fz=fz+fm;
        fm=temp;
    }
    printf("sum=%f",sum);
}
//void main() {
//    int i;
//    float sum = 0, fz = 2, fm = 1, temp;
//    for (i = 0; i < 20; i++) {
//        sum = sum + fz / fm;
//        temp = fz;
//        fz = fz + fm;
//        fm = temp;
//    }
//    printf("前20项之后为%f\n", sum);
//}