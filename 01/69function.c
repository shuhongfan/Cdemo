//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>
#include <stdlib.h>

void strcat11(char* ch1,char* ch2){
    int i=0;
    while (ch1[i]!='\0'){
        i++;
    }
    int j=0;
    while (ch2[j]!='\0'){
        ch1[i+j]=ch2[j];
        j++;
    }
}
void strcat22(char* ch1,char* ch2){
    int i=0;
    while (*(ch1 + i) != '\0'){
        i++;
    }
    int j=0;
    while (*(ch2 + j) != '\0'){
        *(ch1+i+j)=*(ch2+j);
        j++;
    }
}
void strcat(char* ch1,char* ch2){
    while (*ch1) ch1++;
    while (*ch2){
        *ch1=*ch2;
        ch1++;
        ch2++;
    }
}
int main(){
    char ch1[100]="hello";
    char ch2[]="world";
    strcat(ch1,ch2);
    printf("%s\n",ch1);
}
