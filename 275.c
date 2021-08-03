//
// Created by shuhongfan on 2021/6/3.
//

#include <stdio.h>

int main(){
    struct stu{
        int num;
        char name[20];
        int score;
    }s1,s2;

    scanf("%d%s%d",&s1.num,s1.name,&s1.score);
    scanf("%d%s%d",&s2.num,s2.name,&s2.score);

    if(s1.score>=s2.score) printf("%d %s %d",s1.num,s1.name,s1.score);
    else printf("%d %s %d",s2.num,s2.name,s2.score);
}