#include <stdio.h>

int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case '5':printf("90-100\n");break;
        case '4':printf("75-89\n"); break;
        case '3':printf("60-74\n"); break;
        case '2':printf("0-59\n");  break;
        default: printf("error\n");
    }
}