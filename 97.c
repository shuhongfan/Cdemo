#include "stdio.h"
#define N 4
#define M 5

int main(){
    int i,j,k,a[N][M],max,maxj,flag;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++){
        max=a[i][0];
        maxj=0;
        for(j=0;j<M;j++){
            if(a[i][j]>max){
                max=a[i][j];
                maxj=j;
            }
        }
        flag=1;
        for(k=0;k<N;k++){
            if(max>a[k][maxj]){
                flag=0;
                continue;
            }
        }
        if(flag){
            printf("a[%d][%d]=%d\n",i,maxj,max);
            break;
        }
    }
    if(!flag){
        printf("It is not exist!");
    }
    return 0;
    
}
/*
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
*/