#include <stdio.h>

int main(){
    int num[10],i;
    int max,min;
    printf("����10��������\n");
    for(i=0;i<10;i++) scanf("%d",&num[i]);
    min=num[0];
    max=num[0];
    for(i=1;i<10;i++) {
        if(num[i]>max) max=num[i];
        if(num[i]<min) min=num[i];
    }
    printf("��Сֵ��%d,���ֵ��%d\n",min,max);
}