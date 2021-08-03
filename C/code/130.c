#include <stdio.h>

int main(){
    int a[5]={10,13,2,16,3};
    int i;
    printf("数组a中各元素的值分别为：");
    for(i=0;i<5;i++) printf("%5d",a[i]);
    printf("\n");
    printf("逆序输出数组a中各元素值：");
    for(i=4;i>=0;i--) printf("%5d",a[i]);
    printf("\n");
}