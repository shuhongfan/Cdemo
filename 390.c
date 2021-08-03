//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>
int fb(int n){
    if(n==1||n==2) return 1;
    else return fb(n-1)+ fb(n-2);
}
int main(){
    int i,fbarr[20];
    for(i=0;i<20;i++){
        fbarr[i]=fb(i);
    }
    for(i=0;i<20;i++){
        if(i%5==0) printf("\n");
        printf("%d\t",fbarr[i]);
    }
}