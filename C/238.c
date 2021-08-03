#include <stdio.h>

#define N 5

struct student{
    char num[6];
    char name[8];
    int score[3];
} stu[N];

int main(){
    void input(struct student stu[]);
    void print(struct student stu[]);
    input(stu);
    print(stu);
    return 0;
}
void input(struct student stu[]){
    int i,j;
    for(i=0;i<N;i++){
        printf("\ninput score of student:%d:\n",i+1);
        printf("NO.:");
        scanf("%s",stu[i].num);
        printf("Name:");
        scanf("%s",stu[i].name);
        for(j=0;j<3;j++){
            printf("score %d:",j+1);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
}
void print(struct student stu[]){
    int i,j;
    printf("\n NO. name score score2 score3\n");
    for(i=0;i<N;i++){
        printf("%5s%10s",stu[i].num,stu[i].name);
        for(j=0;j<3;j++) printf("%9d",stu[i].score[j]);
        printf("\n");
    }
}