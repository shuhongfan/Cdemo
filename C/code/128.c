#include <stdio.h>
#define N 5

int main(){
    int score1[N],score2[N],score3[N],sum[N];
    int i;
    for(i=0;i<N;i++){
        printf("�����%d��ѧ�������ſγɼ���\n",i+1);
        scanf("%d%d%d",&score1[i],&score2[i],&score3[i]);
        sum[i]=score1[i]+score2[i]+score3[i];
    }
    for(i=0;i<N;i++){
        printf("��%d��ѧ�����ܳɼ���ƽ���ɼ��ֱ�Ϊ��%d,%.2f\n",i+1,sum[i],sum[i]/3.0);
    }
}