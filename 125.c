#include "stdio.h"
float Max=0,Min=0;

int main(){
    float average(float array[],int n);
    float ave,score[10];
    int i;
    for(i=0;i<10;i++) scanf("%f",&score[i]);
    ave=average(score,10);
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n",Max,Min,ave);
    return 0;
}

float average(float array[],int n){
    int i;
    float aver,sum=array[0];
    Max=Min=array[0];
    for(i=1;i<n;i++){
        sum=sum+array[i];
        if(array[i]>Max) Max=array[i];
        else if(array[i]<Min) Min=array[i];
    }
    aver=sum/n;
    return aver;
}