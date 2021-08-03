//
// Created by shuhongfan on 2021/6/6.
//

#include <stdio.h>
float avg(float score[5][4],float av[5]){
    int i,j;
    float sum;
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<4;j++){
            sum+=score[i][j];
        }
        av[i]=sum/4.0;
    }
}
float range(float av[5]){
    int i,j;
    float temp;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(av[i]>av[j]){
                temp=av[i];
                av[i]=av[j];
                av[j]=temp;
            }
        }
    }
}
float range1(float av[5]){
    int i,j,k;
    float temp;
    for(i=0;i<4;i++){
        k=i;
        for(j=i+1;j<5;j++){
            if(av[k]<av[j]){
                k=j;
            }
        }
        if(k!=i){
            temp=av[i];
            av[i]=av[k];
            av[k]=temp;
        }
    }
}
int main(){
    int i,j;
    float score[5][4]={{78,82,93,74},
                       {91,82,72,76},
                       {100,90,85,72},
                       {67,89,90,65},
                       {77,88,99,35}},av[5];
//    for(i=0;i<5;i++){
//        for(j=0;j<4;j++){
//            scanf("%f",&score[i][j]);
//        }
//    }
    avg(score,av);
    for(i=0;i<5;i++){
        printf("NO.%d average is:%.2f\n",i+1,av[i]);
    }
    range1(av);
    for(i=0;i<5;i++){
        printf("range NO.%d average is:%.2f\n",i+1,av[i]);
    }
}