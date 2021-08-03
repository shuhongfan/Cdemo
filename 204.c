#include <stdio.h>
#include <string.h>

int main(){
    void copystr(char *,char *,int);
    int m;
    char str1[20],str2[20];
    gets(str1);
    scanf("%d",&m);
    if(strlen(str1)<m) printf("inpur error");
    else{
        copystr(str1,str2,m);
        printf("result is:%s",str2);
    }
}
void copystr(char *p1,char *p2,int m){
    // int n=0;
    // while(n<m-1){
    //     n++;
    //     p1++;
    // }
    p1=p1+m-1;
    while(*p1!='\0'){
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}