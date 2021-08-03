//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>

int main(){
    int i,j,t1,t2,num,a[11]={1,4,6,9,13,16,19,28,40,100};
    for(i=0;i<10;i++) printf("%d ",a[i]);
    printf("\ninsert num:");
    scanf("%d",&num);
    if(num>a[9]) a[10]=num;
    else {
        for(i=0;i<10;i++){
            if(a[i]>num){
                t2=a[i];
                a[i]=num;
                for(j=i+1;j<11;j++){
                    t1=a[j];
                    a[j]=t2;
                    t2=t1;
                }
            }
        }
    }
    for(i=0;i<11;i++) printf("%d ",a[i]);
}