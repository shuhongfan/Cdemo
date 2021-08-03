#include <stdio.h>

int main(){
    int score[40][3],i,j,num;
    float av[40];
    printf("输入学生人数(不超过40人)");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("输入第%d个学生的语文成绩和数学成绩：",i+1);
        for(j=0;j<2;j++){
            scanf("%d",&score[i][j]);
        }
    }
    for(i=0;i<num;i++){
        score[i][2]=0;
        for(j=0;j<2;j++){
            score[i][2]+=score[i][j];
            av[i]=score[i][2]/2.0;
        }
    }
    printf("%8s%10s%10s%10s%10s\n","编号","语文成绩","数学成绩","总成绩","平均成绩");
    for(i=0;i<num;i++){
        printf("%8d",i+1);
        for(j=0;j<3;j++){
            printf("%10d",score[i][j]);
        }
        printf("%10.1f\n",av[i]);
    }
}