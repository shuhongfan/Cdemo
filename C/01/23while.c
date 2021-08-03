//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    int i=0;
    while (i<100){
        if (i%2==0){
            printf("%d\n",i);
        }
        i++;
    }

//    凡事带7或7的倍数需要敲桌子 否则正常输出
    int j=0;
    while (j<100){
//        7的倍数||个位7||十位7
        if (j%7==0 || j%10==7 || j/10==7){
            printf("敲桌子\n");
        } else{
            printf("%d\n",j);
        }
        j++;
    }
}