//
// Created by shuhongfan on 2021/6/14.
//

#include <stdio.h>
#define N 30
int fb(int f[],int n){
    int i;
    f[0]=1;
    f[1]=1;
    for(i=2;i<n;i++) f[i]=f[i-1]+f[i-2];
}
int main(){
    int i,f[N];
    fb(f,N);
    for(i=0;i<N;i++){
        if(i%5==0) printf("\n");
        printf("%d\t",f[i]);
    }
}