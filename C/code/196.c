#include <stdio.h>

int main(){
    FILE *fp;
    if((fp=fopen("AAA.TXT","wb"))==NULL){
        printf("cannot open file\n");
    }
    fprintf(fp,"this is a test %d%f",10,20.01);
    fclose(fp);
}