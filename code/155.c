#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char password[]="hello";
    char str[20];
    printf("ÇëÊäÈëÃÜÂë:\n");
    gets(str);
    if(strcmp(password,str)==0) printf("ÃÜÂëÕıÈ·");
    else {
        printf("ÃÜÂë´íÎó");
        exit(0);
    }
    printf("Çë¼ÌĞø....");
}