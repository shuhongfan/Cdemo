#include <stdio.h>
#include <string.h>

int main(){
    void sort(char (*p)[6]);
    int i;
    char str[10][6];
    char (*p)[6];
    for(i=0;i<10;i++) scanf("%s",str[i]);
    p=str;
    sort(p);
    for(i=0;i<10;i++) printf("%s\n",str[i]);
    return 0;
}
void sort(char (*s)[6]){
    int i,j;
    char temp[6],*t=temp;
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(strcmp(s[j],s[j+1])>0){
                strcmp(t,s[j]);
                strcmp(s[j],s[j+1]);
                strcmp(s[j+1],t);
            }
        }
    }
}