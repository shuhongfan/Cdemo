#include <stdio.h>

int main(){
    int nums[10],min,max,sum,avg,i;
    printf("请输入10个数字：");
    for(i=0;i<10;i++) scanf("%d",&nums[i]);
    
    max=nums[0];
    min=nums[0];
    for(i=0;i<10;i++) {
        if(nums[i]>max) max=nums[i];
        if(nums[i]<min) min=nums[i];
        sum+=nums[i];
    }
    
    printf("你输入的数据为：\n");
    for(i=0;i<10;i++){
        printf("%10d",nums[i]);
        if((i+1)%2==0) printf("\n");
    }
    avg=sum/10.0;
    printf("max=%d,min=%d,sum=%d,avg=%d",max,min,sum,avg);
}