#include <stdio.h>

int main(){
    FILE *fi;
    char *a="Turbo.c";
    fi=fopen("AAA.TXT","w");
    fputs(a,fi);
    fclose(fi);
}