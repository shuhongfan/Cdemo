#include <stdio.h>

int main(){
    int year,temp;
    scanf("%d",&year);
    while (year!=0)
    {
        year%400==0||(year%4==0&&year%100!=0)?printf("ÈòÄê\n"):printf("·ÇÈòÄê\n");
        scanf("%d",&year);
    }
}