#include <stdio.h>

int main(){
    int score[40][3],i,j,num;
    float av[40];
    printf("����ѧ������(������40��)");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("�����%d��ѧ�������ĳɼ�����ѧ�ɼ���",i+1);
        for(j=0;j<2;j++){
            scanf("%d",&score[i][j]);
        }
    }
    for(i=0;i<num;i++){
        score[i][2]=0;
        for(j=0;j<2;j++){
            score[i][2]+=score[i][j];
            av[i]=score[i][2]/2.0;
        }
    }
    printf("%8s%10s%10s%10s%10s\n","���","���ĳɼ�","��ѧ�ɼ�","�ܳɼ�","ƽ���ɼ�");
    for(i=0;i<num;i++){
        printf("%8d",i+1);
        for(j=0;j<3;j++){
            printf("%10d",score[i][j]);
        }
        printf("%10.1f\n",av[i]);
    }
}