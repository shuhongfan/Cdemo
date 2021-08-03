#include <stdio.h>

int main(){
    int a[10]={89,67,100,64,76,90,94,52,82,90};
    int num,i;
    printf("输入你要查找的数：");
    scanf("%d",&num);
    for(i=0;i<10;i++) if (a[i]==num) break;
    if(i<10) printf("%d在这组数种的第%d个位置",num,i+1);
    else printf("%d不在这组数中");
}