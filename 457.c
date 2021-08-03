//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int num,t1,t2,i,j,a[11]={1,4,6,9,13,16,19,28,40,100};
    for(i=0;i<10;i++) printf("%d ",a[i]);
    printf("\ninsert data:");
    scanf("%d",&num);
    if(a[9]<num) a[10]=num;
    else{
        for(i=0;i<10;i++){
            if(a[i]>num){
                t1=a[i];
                a[i]=num;
                for(j=i+1;j<11;j++){
                    t2=a[j];
                    a[j]=t1;
                    t1=t2;
                }
                break;
            }
        }
    }
    for(i=0;i<11;i++) printf("%d ",a[i]);
}