//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>
int fb(int fbarr[],int num){
    int i;
    for(i=2;i<=num;i++){
        fbarr[i]=fbarr[i-1]+fbarr[i-2];
    }
    return 0;
}
int main(){
    int i,fbarr[20]={1,1};
    fb(fbarr,20);
    for(i=0;i<20;i++){
        if(i%5==0) printf("\n");
        printf("%d\t",fbarr[i]);
    }
    return 0;
}