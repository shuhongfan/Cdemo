#include "stdio.h"
int letter,digit,space,others;

int main(){
    void count(char []);
    char text[100];
    gets(text);
    letter=0,digit=0,space=0,others=0;
    count(text);
    printf("letter=%d,digit=%d,space=%d,others=%d",letter,digit,space,others);
    return 0;
}

void count(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) letter++;
        else if(str[i]>='0'&&str[i]<='9') digit++;
        else if(str[i]==' ') space++;
        else others++;
    }
}