#include <stdio.h>

int main(){
    int i,num[20];
    int count,sum;
    count=0;sum=0;
    printf("����20������:\n");
    for(i=0;i<20;i++){
        scanf("%d",&num[i]);
        if(num[i]>=0){
            count++;
            sum+=num[i];
        }
    }
    printf("�Ǹ����ĸ���Ϊ��%d",count);
    printf("�Ǹ���֮��Ϊ��%d",sum);
}