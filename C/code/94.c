#include <stdio.h>

int main(){
    float score;
    int snum;
    char grade;
    scanf("%d,%f",&snum,&score);
    if (score>=90){
        grade='5';
    } else if (score>=75){
        grade='4';
    } else if (score>=60){
        grade='3';
    } else {
        grade='2';
    }
    printf("%d: %c\n",snum,grade);
}