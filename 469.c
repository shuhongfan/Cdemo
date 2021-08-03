//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
#define N 3
int change(int arr[][N]){
    int i,j,t;
    for(i=0;i<N;i++){
        for(j=0;j<N/2;j++){
            t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
}
int main(){
    int i,j,a[N][N]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    change(a);
    printf("*********************\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}