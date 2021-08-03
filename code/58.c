#include <stdio.h>

int main(){
    char c,c1,c2;
    (c1=getchar())>(c2=getchar())?(c=c1):(c=c2);
    printf("%c",c);
}