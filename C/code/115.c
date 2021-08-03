#include <stdio.h>

int main(){
    int number;
    printf("number=");
    scanf("%d",&number);
    if(number>0) printf("%d是正数",number);
    else if(number==0) printf("%d是零",number);
    else printf("%d是负数",number);
}