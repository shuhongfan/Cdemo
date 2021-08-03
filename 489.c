//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#define N 10
int sort(char a[N]){
    int i,j;
    char t;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main(){
    char a[N];
    gets(a);
    sort(a);
    puts(a);
}