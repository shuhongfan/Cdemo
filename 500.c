//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>
int fb(int n){
    if(n==1||n==2) return 1;
    return fb(n-1)+fb(n-2);
}
int main(){
    int i;
    for(i=1;i<=20;i++){
        printf("%d\t",fb(i));
        if(i%5==0) printf("\n");
    }
}