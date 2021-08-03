//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>

int main(){
    int n,nums[10],size=0,i;
    scanf("%d",&n);
    while (n){
        nums[size]=n%10;
        size++;
        n=n/10;
    }
    printf("size=%d\n",size);
    for(i=0;i<size;i++) printf("%d ",nums[i]);
}