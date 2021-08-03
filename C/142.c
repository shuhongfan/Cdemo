#include "stdio.h"

int main(){
    void cpy(char [],char []);
    char str[80],c[80];
    gets(str);
    cpy(str,c);
    puts(c);
    return 0;
}

void cpy(char str[],char c[]){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
            c[j]=str[i];
            j++;
        }
    }
    c[j]='\0';
}