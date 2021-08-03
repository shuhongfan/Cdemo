#include "stdio.h"

int main(){
    char ch1[100],ch2[100];
    int i=0,result;
    gets(ch1);
    gets(ch2);
    while (ch1[i]==ch2[i]&&ch1[i]!='\0') i++;
    if(ch1[i]=='\0'&&ch2[i]=='\0') result=0;
    else result=ch1[i]-ch2[i];
    printf("%d\n",result);
}