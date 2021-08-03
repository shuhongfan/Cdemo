//
// Created by shuhongfan on 2021/6/9.
//

#include <stdio.h>

int main(){
    int num[5],count=0,n,i;
    scanf("%d",&n);
    while(n!=0){
        num[count]=n%10;
        count++;
        n=n/10;
    }
    printf("count=%d\n",count);
    for(i=count-1;i>=0;i--) printf("%d\t",num[i]);
}