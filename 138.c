#include "stdio.h"
#include "string.h"

int main(){
    void inverse(char str[]);
    char str[100];
    scanf("%s",str);
    inverse(str);
    printf("inverse string:%s\n",str);
    return 0;
}
void inverse(char str[]){
    char t;
    int i,j;
    j=strlen(str);
    for(i=0;i<(strlen(str)/2);i++){
        t=str[i];
        str[i]=str[j-1];
        str[j-1]=t;
        j--;
    }
}