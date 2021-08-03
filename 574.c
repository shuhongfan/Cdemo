//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    int temp1,temp2,i,j,num,end,a[11]={1,4,6,9,13,16,19,28,40,100};
    scanf("%d",&num);
    end=a[9];
    if(num>end) a[10]=num;
    else{
        for(i=0;i<10;i++){
            if(a[i]>num){
                temp1=a[i];
                a[i]=num;
                for(j=i+1;j<11;j++){
                    temp2=a[j];
                    a[j]=temp1;
                    temp1=temp2;
                }
                break;
            }
        }
    }
    for(i=0;i<11;i++)
    printf("%d ",a[i]);
}