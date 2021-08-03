//
// Created by shuhongfan on 2021/6/17.
//

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if(score>100||score<0) printf("error!");
    else if(score>=90) printf("A");
    else if(score>=80) printf("B");
    else if(score>=70) printf("C");
    else if(score>=60) printf("D");
    else printf("E");
    scanf("%d",&score);
}