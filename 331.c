//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main(){
    int a[8]={1,2,3,4,5,6,7,8},i=0,s=0;
    while (i++<7){
        if(a[i]%2!=0) {
            s+=a[i];
            printf("i=%d\ta[%d]=%d\n",i,i,a[i]);
        }
    }
//    printf("%d\n",s);
}