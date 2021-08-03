#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int i=0;
    char str[100];
    if((fp=fopen("a.txt","w"))==NULL){
        printf("cannot open file\n");
        exit(0);
    }
    printf("input a string:\n");
    gets(str);
    while(str[i]!='!'){
        if(str[i]>='a'&&str[i]<='z') str[i]=str[i]-32;
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);

    fp=fopen("a.txt","r");
    fgets(str,strlen(str),fp);
    printf("%s",str);
    fclose(fp);
    return 0;
}