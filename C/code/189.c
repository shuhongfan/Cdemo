#include <stdio.h>

int main(){
    FILE *fp1;
    char fn[13];
    puts("enter file name");
    scanf("%s",fn);
    fp1=fopen(fn,"wb+");
}