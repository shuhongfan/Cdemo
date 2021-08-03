#include <stdio.h>

int main(){
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    average(*score,12);
    search(score,2);
    return 0;
}
void average(float *p,int n){
    float *p_end;
    float sum=0,aver;
    p_end=p+n-1;
    while (p<=p_end)
    {
        sum=sum+(*p);
        p++;
    }
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}
void search(float (*p)[4],int n){
    int i;
    for(i=0;i<4;i++) printf("%5.2f ",*(*(p+n)+i));
}