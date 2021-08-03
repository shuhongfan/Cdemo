#include <stdio.h>

int main(){
    int i,num[20];
    int count,sum;
    count=0;sum=0;
    printf("输入20个整数:\n");
    for(i=0;i<20;i++){
        scanf("%d",&num[i]);
        if(num[i]>=0){
            count++;
            sum+=num[i];
        }
    }
    printf("非负数的个数为：%d",count);
    printf("非负数之和为：%d",sum);
}