#include <stdio.h>

int main(){
    int number;
    printf("number=");
    scanf("%d",&number);
    if(number%10==0) printf("%d��10�ı���",number);
    else printf("%d����10�ı���",number);
}