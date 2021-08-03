//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
int yuanyin(char str[],char yy[]){
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            yy[j]=str[i];
            j++;
        }
        i++;
    }
    yy[j]='\0';
}
int main(){
    char str[100],yy[100];
    gets(str);
    yuanyin(str,yy);
    puts(yy);
}