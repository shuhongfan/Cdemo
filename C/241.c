#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch,filename[10];
    scanf("%s",filename);
    getchar();
    if((fp=fopen(filename,"w"))==NULL){
        printf("cannot open file\n");
        exit(0);
    }
    ch=getchar();
    while(ch!='#'){
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
}