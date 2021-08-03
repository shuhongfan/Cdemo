#include <stdio.h>

int main(){
    FILE *fi;
    char *a;
    if((fi=fopen("AAA.TXT","r"))==NULL){
        printf("can not open this file");
    }
    fgets(a,8,fi);
    printf("%s",a);
    fclose(fi);
}