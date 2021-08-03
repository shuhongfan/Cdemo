#include <stdio.h>

int main(){
    FILE *stream;
    char *a="           ";
    int b;
    float c;
    if(!(stream=fopen("AAA.TXT","rb"))) printf("cannot open file");
    fscanf(stream,"%15s",a);
    fscanf(stream,"%d%f",&b,&c);
    printf("%15s %d %f\n",a,b,c);
    fclose(stream);
}