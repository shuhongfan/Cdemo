#include <stdio.h>
#define N 10

int main(){
    int i,score[N];
    int sum;
    float average;
    sum=0;
    printf("����%d��ѧ���ĳɼ�:\n",N);
    for(i=0;i<N;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    } 
    average=(float)sum/N;
    printf("�ܳɼ�Ϊ��%d\n",sum);
    printf("ƽ���ɼ�Ϊ��%.2f",average);
}