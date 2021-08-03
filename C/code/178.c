#include <stdio.h>

int trans(int sec){
    int hour,min;
    hour=sec/60/60;
    min=(sec%(60*60))/60;
    sec=(sec%(60*60))%60;
    printf("%d hour- %d min - %d sec",hour,min,sec);
}
int main(){
    int sec;
    scanf("%d",&sec);
    trans(sec);
}