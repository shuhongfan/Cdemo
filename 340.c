//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>
int main(){
    int i,j,k;
    float stu[5][4]={{17,18,19,20},{4,5,6,7},{9,10,11,12},{1,2,3,4},{13,14,15,16}},av[5],sum,t;
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<4;j++){
            sum+=stu[i][j];
        }
        av[i]=sum/4.0;
    }
    for(i=0;i<5;i++) printf("old av[i]=%f\n",av[i]);
    for(i=0;i<4;i++){
        k=i;
        for(j=i;j<5;j++){
            if(av[j]<av[k]) k=j;
        }
        if(k!=i){t=av[k];av[k]=av[i];av[i]=t;}
    }
    for(i=0;i<5;i++) printf("av[i]=%f\n",av[i]);
}