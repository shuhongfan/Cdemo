//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#define N 10
int sort(char s[N]){
    int i,j,k;
    char t;
    for(i=0;i<N-1;i++){
        k=i;
        for(j=i+1;j<N;j++){
            if(s[j]<s[k]) k=j;
        }
        if(k!=i) {t=s[k];s[k]=s[i];s[i]=t;}
    }
}
int sort1(char s[N]){
    int i,j;
    char t;
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(s[j]>s[j+1]){
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
int main(){
    char s[N];
    gets(s);
    sort1(s);
    puts(s);
}