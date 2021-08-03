#include <stdio.h>

int main(){
    int grade,n1,n2;
    n1=n2=0;
    printf("输入一组学生的成绩：\n");
    scanf("%d",&grade);
    while(grade!=-1){
        if(grade>=60) n1++;
        else n2++;
        scanf("%d",&grade);
    }
    printf("及格人数为：%d\n不及格人数为：%d",n1,n2);
}