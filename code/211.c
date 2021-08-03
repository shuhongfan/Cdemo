#include <stdio.h>

#define CAPSLOCK 1
#ifdef CAPSLOCK
    #define BH 32
#else
    #define BH 0
#endif
int main(){
    char ch[100];
    scanf("%s",ch);
    for(int i=0;i<100;i++){
        if(ch[i]!='\0') printf("%c",ch[i]-BH);
        else break;
    }
}