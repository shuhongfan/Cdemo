#include <stdio.h>

int main(){
    int number;
    printf("number=");
    scanf("%d",&number);
    if(number>0) printf("%d������",number);
    else if(number==0) printf("%d����",number);
    else printf("%d�Ǹ���",number);
}