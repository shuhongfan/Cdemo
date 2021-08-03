#include <stdio.h>

int main(){
    FILE *fp;
    static char a[][8]={"Turbo.c","BASIC","PASCAL","DBASE"};
    int i;
    fp=fopen("AAA.TXT","w");
    for(i=0;i<4;i++){
        fputs(a[i],fp);
    }
    fclose(fp);
}