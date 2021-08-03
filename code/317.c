//
// Created by shuhongfan on 2021/4/24.
//

#include "stdio.h"
void main(){
    int i,jishu=0,oushu=0;
    for(i=1;i<=10;i++){
        if(i%2==0) oushu=oushu+i;
        else jishu=jishu+i;
    }
    printf("偶数和：%d,奇数和：%d",oushu,jishu);
}