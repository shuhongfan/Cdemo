#include <stdio.h>

#define N 3
#define M 4
int max[N];
int main(){
    int num[N][M]={12,35,2,65,33,68,2,5,1,56,3,10};
    int i;
    LineMax(num);
    for(i=0;i<N;i++){
        printf("第 %d 行的最大值是  %d\n",i+1,max[i]);
    }
}

int LineMax(int x[N][M]){
    int i,j;
    for(i=0;i<N;i++){
        max[i]=x[i][0];
        for(j=1;j<M;j++){
            if(x[i][j]>max[i]) max[i]=x[i][j];
        }
    }
}