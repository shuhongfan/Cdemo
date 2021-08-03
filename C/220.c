#include <stdio.h>

int main(){
    char *month_name[13]={"illegal_month","January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    scanf("%d",&i);
    if(i>12||i<1) printf("error");
    else printf("IS is %s.",*(month_name+i));
}