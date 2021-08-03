#include <stdio.h>

int main(){
    float b=33.225,c=56.866;
    int a1=(int)(b+c);
    int a2=(int)b+(int)c;
    printf("a1=%d\n",a1);
    printf("a2=%d",a2);
}