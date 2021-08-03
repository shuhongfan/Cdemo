#include <stdio.h>
#include <string.h>

int main(){
    char name[40][10],str[10];
    int score[40],num,i,j,t;
    printf("输入学生人数：");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("请输入%d个学生的姓名和成绩:",i+1);
        scanf("%s %d",&name[i],&score[i]);
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(score[j]<score[i]){
                t=score[j];
                score[j]=score[i];
                score[i]=t;
                strcpy(str,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],str);
            }
        }
    }
    printf("排序的成绩如下：\n");
    printf("%8s%12s%8s\n","名次","姓名","成绩");
    for(i=0;i<num;i++){
        printf("%8d%12s%8d\n",i+1,name[i],score[i]);
    }
}