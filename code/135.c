#include <stdio.h>
#define N 4

int main(){
    int score[N][3],sum[N];
    int i,j;
    for(i=0;i<N;i++){
        sum[i]=0;
        printf("输入第%d个学生的三门课成绩:",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&score[i][j]);
            sum[i]=sum[i]+score[i][j];
        }
    }
    for(i=0;i<N;i++) printf("第%d个学生的总成绩和平均成绩分别为：%d,%.2f\n",i+1,sum[i],sum[i]/3.0);
}