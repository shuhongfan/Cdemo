#include <stdio.h>

int main(){
    char *p,str[20];
    int upp=0,low=0,spa=0,dig=0,oth=0,i=0;
    while((str[i]=getchar())!='\n') i++;
    p=str;
    while(*p!='\n'){
        if(*p>='a'&&*p<='z') upp++;
        else if(*p>='A'&&*p<='Z') low++;
        else if(*p==' ') spa++;
        else if(*p>='0'&&*p<='9') dig++;
        else oth++;
        p++;
    }
    printf("u=%d\nl=%d\ns=%d\nd=%d\no=%d",upp,low,spa,dig,oth);
}