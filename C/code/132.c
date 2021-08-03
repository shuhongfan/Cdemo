#include <stdio.h>

int main(){
    int num[10]={35,56,93,-8,0,120,88,-28,98,10},t;
    int i,j;
    // printf("输入10个整数:\n");
    // for(i=0;i<10;i++) scanf("%d",&num[i]);
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(num[j]<num[i]){
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
    printf("排序后的结果为：\n");
    for(i=0;i<10;i++) printf("%5d",num[i]);
}