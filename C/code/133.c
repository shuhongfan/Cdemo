#include <stdio.h>

int main(){
    int a[3][4];
    int i,j;
    printf("�����ά�����и�Ԫ�ص�ֵ��\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}