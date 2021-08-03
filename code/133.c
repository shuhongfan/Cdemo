#include <stdio.h>

int main(){
    int a[3][4];
    int i,j;
    printf("输入二维数组中各元素的值：\n");
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