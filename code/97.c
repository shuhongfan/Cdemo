#include <stdio.h>

int main(){
    int y,m,length;
    scanf("%d,%d",&y,&m);
    printf("%d,%d",y,m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: length=31;break;
        case 4:
        case 6:
        case 9:
        case 11: length=30;break;
        case 2:
            if(y%400==0||(y%4==0&&y%100!=0)) {length=29;break;}
            else {length=28;break;}
        default: printf("error,please againn\n");
        printf("The length of %d %d is %d\n",y,m,length);
    }
}