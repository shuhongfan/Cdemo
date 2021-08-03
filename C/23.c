#include <stdio.h>

int main(){
    int year,leap;
    scanf("%d",&year);
    if(year%4!=0){
        leap=0;
    } else if(year%100!=0){
        leap=1;
    } else if(year%400!=0){
        leap=0;
    } else{
        leap=1;
    }
    if(leap!=0){
        printf("%d is",year);
    } else{
        printf("%d is not",year);
    }
    return 0;
}