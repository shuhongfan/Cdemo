#include <stdio.h>

int main(){
    char text[3][80];
    int i,j,upp=0,low=0,dig=0,spa=0,oth=0;
    for(i=0;i<3;i++) gets(text[i]);
    for(i=0;i<3;i++)
        for(j=0;j<80&&text[i][j]!='\0';j++){
            if(text[i][j]>='A'&&text[i][j]<='Z') upp++;
            else if(text[i][j]>='a'&&text[i][j]<='z') low++;
            else if(text[i][j]>='0'&&text[i][j]<='9') dig++;
            else if(text[i][j]==' ') spa++;
            else oth++;
        }
    printf("upp=%d\n",upp);
    printf("low=%d\n",low);
    printf("dig=%d\n",dig);
    printf("spa=%d\n",spa);
    printf("oth=%d\n",oth);
}