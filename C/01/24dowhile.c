//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>
#include <math.h>
int main(){
//    int i=0;
//    do{
//        printf("%d\n",i);
//        i++;
//    } while (i<10);

    int j=1;
    do {
//        个位数
        int a=j%10;
//        十位
        int b=j/10%10;
//        百位
        int c=j/100;
        if (pow(a,3)+pow(b,3)+pow(c,3)==j){
            printf("%d\n",j);
        }
        j++;
    } while (j<=999);
}