#include <stdio.h>
#define N 10

int main(){
    int i,score[N];
    int sum;
    float average;
    sum=0;
    printf("输入%d个学生的成绩:\n",N);
    for(i=0;i<N;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    } 
    average=(float)sum/N;
    printf("总成绩为：%d\n",sum);
    printf("平均成绩为：%.2f",average);
}