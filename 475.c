//
// Created by shuhongfan on 2021/6/12.
//

#include <stdio.h>
int count(char a[],int cc[]){
    int i=0;
    while (a[i]!='\0'){
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') cc[0]++;
        else if(a[i]>='0'&&a[i]<='9') cc[1]++;
        else if(a[i]==' ') cc[2]++;
        else cc[3]++;
        i++;
    }
}
int main(){
    char a[100];
    int cc[4]={0};
    gets(a);
    count(a,cc);
    printf("letter=%d,dig=%d,spa=%d,oth=%d",cc[0],cc[1],cc[2],cc[3]);
}