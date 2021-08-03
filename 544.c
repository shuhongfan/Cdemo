//
// Created by shuhongfan on 2021/6/18.
//

#include <stdio.h>

int main(){
    float score;
    scanf("%f",&score);
    while(score<0||score>100){
        printf("try agagin!\n");
        scanf("%f",&score);
    }
    if(score>=90) printf("A");
    else if(score>=80) printf("B");
    else if(score>=70) printf("C");
    else if(score>=60) printf("D");
    else printf("E");
}