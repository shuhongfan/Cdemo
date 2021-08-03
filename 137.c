#include "stdio.h"
#define N 3
int array[N][N];

int main(){
    void inverse();
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&array[i][j]);
        }
    }
    inverse();
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%5d",array[i][j]);
        }
        printf("\n");
    }
}
void inverse(){
    int i,j,t;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            t=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=t;
        }
    }
}