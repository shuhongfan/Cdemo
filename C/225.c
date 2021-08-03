#include <stdio.h>

struct Student{
    int num;
    char name[20];
    float score;
};

int main(){
    struct Student stu[5]={
        {1001,"zhang",78},
        {1003,"wang",98.5},
        {1006,"li",86},
        {1008,"ling",83.5},
        {1010,"sun",100}
    };
    struct Student temp;
    const int n=5;
    int i,j,k;
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(stu[j].score>stu[k].score) k=j;
            temp=stu[k];
            stu[k]=stu[j];
            stu[j]=temp;
        }
    }
    for(i=0;i<n;i++) 
        printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
}