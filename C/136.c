#include "stdio.h"

#define N 3

int array[N][N];

int main(){
    void convert(int array[][3]);
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++) scanf("%d",&array[i][j]);
    convert(array);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++) printf("%5d",array[i][j]);
        printf("\n");
    }
}
void convert(int array[][3]){
    int i,j,t;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            t=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=t;
        }
    }
}