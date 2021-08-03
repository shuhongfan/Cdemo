#include <stdio.h>
#include <string.h>

int main(){
    void copystr(char *str1,char *str2,int m);
    int m;
    char str1[20],str2[20];
    gets(str1);
    scanf("%d",&m);
    if(strlen(str1)<m) printf("error");
    else {
        copystr(str1,str2,m);
        printf("%s",str2);
    }
}
void copystr(char *str1,char *str2,int m){
    str1=str1+m-1;
    while(*str1!='\0'){
        *str2=*str1;
        str1++;
        str2++;
    }
}