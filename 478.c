//
// Created by shuhongfan on 2021/6/13.
//

#include <stdio.h>
#define N 3
#define M 4

int main(){
    int a[N][M],row=0,col=0,max=0,i,j;
    printf("输入数据");
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            if(a[i][j]>max){
                max=a[i][j];
                row=i;
                col=j;
            }
    printf("max=%d,row=%d,col=%d",max,row,col);
    return 0;
}