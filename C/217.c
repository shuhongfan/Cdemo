#include <stdio.h>

int main(){
    int strcmp(char *p1,char *p2);
    int m;
    char str1[20],str2[20],*p1,*p2;
    scanf("%s",str1);
    scanf("%s",str2);
    p1=&str1[0];
    p2=&str2[0];
    m=strcmp(p1,p2);
    printf("result:%d",m);
    return 0;
}

int strcmp(char *p1,char *p2){
    int i;
    i=0;
    while(*(p1+i)==*(p2+i)){
        if(*(p1+i)=='\0') return 0;
        i++;
    }
    return(*(p1+i)-*(p2+i));
}