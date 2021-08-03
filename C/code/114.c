#include <stdio.h>

int main(){
    int number;
    printf("number=");
    scanf("%d",&number);
    if(number%10==0) printf("%d是10的倍数",number);
    else printf("%d不是10的倍数",number);
}