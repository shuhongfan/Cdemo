#include <stdio.h>
float average;
int main(){
    int i,num[100],n,s;
    printf("输入学生人数：");
    scanf("%d",&n);
    printf("输入%d个学生的成绩：\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    s=sum(num,n);
    printf("总成绩=%d\n",s);
    printf("平均成绩=%.2f\n",average);
}

sum(a,m)
int a[],m;
{
    int i,s=0;
    for(i=0;i<m;i++){
        s+=a[i];
    }
    average=(float)s/m;
    return s;
}