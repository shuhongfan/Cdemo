#include <stdio.h>
#define N 4

int main(){
    int score[N][3],sum[N];
    int i,j;
    for(i=0;i<N;i++){
        sum[i]=0;
        printf("�����%d��ѧ�������ſγɼ�:",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&score[i][j]);
            sum[i]=sum[i]+score[i][j];
        }
    }
    for(i=0;i<N;i++) printf("��%d��ѧ�����ܳɼ���ƽ���ɼ��ֱ�Ϊ��%d,%.2f\n",i+1,sum[i],sum[i]/3.0);
}