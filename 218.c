#include <stdio.h>

int main(){
    int strcmp(char *s1,char *s2);
    int m;
    char str1[20],str2[20],*p1,*p2;
    gets(str1);
    gets(str2);
    m=strcmp(&str1[0],&str2[0]);
    printf("result=%d",m);
}
int strcmp(char *s1,char *s2){
    int i=0;
    while(*(s1+i)==*(s2+i)){
        if(*(s1+i)=='\0') return 0;
        i++;
    }
    return (*(s1+i)-*(s2+i));
}