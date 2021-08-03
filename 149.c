#include "stdio.h"
#include <string.h>
#define N 10
char str[N];

int main(){
    void sort(char []);
    int i,flag=1;
    while(flag==1){
        scanf("%s",str);
        if(strlen(str)>N) printf("string too long,input again!");
        else flag=0;
    }
    sort(str);
    for(i=0;i<N;i++){
        printf("%c",str[i]);
    }
    return 0;
}
void sort(char str[]){
    int i,j;
    char t;
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            if(str[j]>str[j+1]){
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
}