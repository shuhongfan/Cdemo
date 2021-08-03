#include <stdio.h>

int main(){
    char ch[]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t'};
    int i;
    for(i=0;i<14;i++){
        printf("%c\n",ch[i]);
    }

    char ch2[]="I am a student";
    printf("%s",ch2);
}